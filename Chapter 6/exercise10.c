#include <stdio.h>

int main(){
	int earlyDay, earlyMonth, earlyYear, month = 1, day = 1, year = 1;

	printf("Enter a date: ");
	scanf("%2d/%2d/%2d", &earlyMonth, &earlyDay, &earlyYear);

	while(1){
		printf("Enter a date: ");
		scanf("%2d/%2d/%2d", &month, &day, &year);

		if(month == 0 && year ==0 && day == 0){
			break;
		}

		if(earlyYear > year){
			earlyDay = day;
			earlyMonth = month;
			earlyYear = year;
		}else if(earlyMonth > month){
			earlyMonth = month;
			earlyDay = day;
		}else if(earlyDay > day){
			earlyDay = day;
		}
	}

	printf("The earliest date is: %2d/%2d/%2d", earlyMonth, earlyDay, earlyYear);
}

