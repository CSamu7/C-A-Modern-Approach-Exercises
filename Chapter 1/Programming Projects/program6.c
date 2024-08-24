#include <stdio.h>

int main(void){
	int amount;

	printf("Enter a U.S. dollar amount: ");
	scanf("%d", &amount);

	int twentyBills = amount / 20;
	amount -= twentyBills * 20;

	int tenBills = amount / 10;
	amount -= tenBills * 10;

	int fiveBills = amount / 5;
	amount -= fiveBills * 5;

	int oneBills = amount / 1;
	amount -= oneBills * 1;

	printf("$20 bills: %d \n", twentyBills);
	printf("$10 bills: %d \n", tenBills);
	printf("$5 bills: %d \n", fiveBills);
	printf("$1 bills: %d \n", oneBills);
}

