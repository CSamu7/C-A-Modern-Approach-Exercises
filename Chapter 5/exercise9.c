#include <stdio.h>

int main(){
	int firstDateDay, firstDateMonth, firstDateYear, secondDateDay, secondDateMonth, secondDateYear;

	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &firstDateMonth, &firstDateDay, &firstDateYear);

	printf("Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d", &secondDateMonth, &secondDateDay, &secondDateYear);

	int firstTotalYear = (firstDateYear * 365) + (firstDateMonth * 30) + firstDateDay;

	int secondTotalYear = (secondDateYear * 365) + (secondDateMonth * 30) + secondDateDay;

	if (firstTotalYear > secondTotalYear){
		printf("%d/%d/%d is earlier than %d/%d/%d", secondDateMonth, secondDateYear, secondDateDay, firstDateMonth, firstDateDay, firstDateYear);
	}else{	
		printf("%d/%d/%d is earlier than %d/%d/%d", firstDateMonth, firstDateYear, firstDateDay, secondDateMonth, secondDateDay, secondDateYear);
	}

}


