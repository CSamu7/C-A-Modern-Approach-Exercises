#include <stdio.h>

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main(){
	int desired_time, departure_time, arrival_time, hour, minutes;

	printf("Enter a time (24 hours): ");
	scanf("%d:%d", &hour, &minutes);
	desired_time = (hour * 60) + minutes;

	find_closest_flight(desired_time, &departure_time, &arrival_time);

	int departureHour = departure_time / 60;
	int departureMinutes = departure_time % 60;

	int arrivalHour = arrival_time / 60;
	int arrivalMinutes = arrival_time % 60;

	printf("Closest departure time is %d:%02d, arriving at %d:%02d", departureHour, departureMinutes, arrivalHour, arrivalMinutes);
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time){
	const int departures[8] = {480, 583, 679, 767, 840, 945, 1140, 1305};
	const int arrivals[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438};

	for(int i = 0; i<8; i++){
		int differenceTime = (departures[i+1] - departures[i]) / 2;

		if(desired_time < differenceTime + departures[i]){
			*departure_time = departures[i];
			*arrival_time = arrivals[i];
			return;
		}
	}

	*departure_time = departures[7];
	*arrival_time = arrivals[7];
}


