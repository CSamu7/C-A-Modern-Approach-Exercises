#include<stdio.h>

#define TAX .05f

int main(void){
	float amount;

	printf("Enter an amount: ");
	scanf("%f", &amount);

	float amountTaxed = amount + (amount * TAX);
	printf("With tax added: %f", amountTaxed);
}

