#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(){
	int amount, twenties, tens, fives, ones;

	printf("Enter the amount: ");
	scanf("%d", &amount);

	pay_amount(amount, &twenties, &tens, &fives, &ones);

	printf("$20: %d\n $10: %d \n $5: %d \n $1: %d", twenties, tens, fives, ones);
}


void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones){
	*twenties = dollars / 20;
	*tens = (dollars % 20) / 10;
	*fives = ((dollars % 20) % 10) / 5;
	*ones = (((dollars % 20) % 10) % 5) / 1;
}

