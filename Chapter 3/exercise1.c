#include <stdio.h>

int main(){
	int day, month, year;

	printf("Enter a date (dd/mm/yyyy): ");
	scanf("%d/%d/%d",&day, &month, &year);

	printf("You entered the date: %d/%d/%d", day, month, year);
}
