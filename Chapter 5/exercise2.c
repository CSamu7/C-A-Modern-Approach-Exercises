#include <stdio.h>

int main(){
	int firstHourTime, firstMinutesTime, secondHourTime;

	printf("Enter a 24-hour time: " );
	scanf("%d:%d:", &firstHourTime, &firstMinutesTime);

	if(firstHourTime > 12){
		secondHourTime = firstHourTime - 12;
		printf("Equivalent 12-hour time: %d:%d PM", secondHourTime, firstMinutesTime);
	}else{
		printf("Equivalent 12-hour time: %d:%d AM", firstHourTime, firstMinutesTime);
	}

}

