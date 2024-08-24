#include <stdio.h>

int day_of_year(int month, int day, int year);

int main(){
	printf("%d", day_of_year(8, 23, 2023));
	printf("%d", day_of_year(8, 23, 2024));
}

int day_of_year(int month, int day, int year){
	if(year % 4 == 0){
		day++;		
	}

	int m = 30 * month;
	
	return m + day;
}


