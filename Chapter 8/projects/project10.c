#include <stdio.h>

int main(){
	const int departures[8] = {480, 583, 679, 767, 840, 945, 1140, 1305};
	const int arrivals[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438};
	
	int minutes, hour, timeUser, departureHour, departureMinutes, arriveHour, arriveMinutes;

	printf("Enter a time (24 hours): ");
	scanf("%d:%d", &hour, &minutes);
	timeUser = (hour * 60) + minutes;

	for(int i = 0; i<7; i++){
		int differenceTime = departures[i] + (departures[i+1] - departures[i]) / 2;

		if(timeUser <= differenceTime){
			departureHour = departures[i] / 60;
			departureMinutes = departures[i] % 60;

			arriveHour = arrivals[i] / 60;
			arriveMinutes = arrivals[i] % 60;

			printf("Closest departure time is %d:%02d., arriving at %d:%02d", departureHour, departureMinutes, arriveHour, arriveMinutes);
			return 0;
		}
	}

	departureHour = departures[7] / 60;
	departureMinutes = departures[7] % 60;

	arriveHour = arrivals[7] / 60;
	arriveMinutes = arrivals[7] % 60;

	
printf("Closest departure time is %d:%02d., arriving at %d:%02d", departureHour, departureMinutes, arriveHour, arriveMinutes);
	
	
}

