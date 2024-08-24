#include <stdio.h>

void split_date(int day_of_year, int year, int *month, int *day);

int main(){
	int day_of_year = 60, year = 2024, month, day;

	split_date(day_of_year, year, &month, &day);

	printf("%02d/%02d/%d", day, month, year);	
}

void split_date(int day_of_year, int year, int *month, int *day){		
	int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int totalDays = 0;

	if(year % 4 == 0) {
		months[1]++;
	}

	for(int i = 1; i<=12; i++){
		if(day_of_year <= totalDays + months[i-1]){
			*month = i;
			break;
		}
		
		totalDays += months[i-1];
	}
 
	*day = day_of_year - totalDays;	
}


