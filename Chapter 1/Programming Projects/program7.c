#include <stdio.h>

int main(void){
	float amountLoan, interestRate, monthlyPayment;

	printf("Enter amount of loan: \n");
	scanf("%f", &amountLoan);

	printf("Enter interest rate: \n");
	scanf("%f", &interestRate);

	printf("Enter monthly payment: \n");
	scanf("%f", &monthlyPayment);

	float interestRateMonthly = (interestRate * .01) / 12;
	float interestToPay = amountLoan * interestRateMonthly;

	float firstPayment = amountLoan - monthlyPayment + interestToPay;
	interestToPay = firstPayment * interestRateMonthly;
	
	float secondPayment = firstPayment - monthlyPayment + interestToPay;
	interestToPay = secondPayment * interestRateMonthly;

	float thirdPayment = secondPayment - monthlyPayment + interestToPay;

	printf("Balance remaining after first payment: %f \n", firstPayment);
	printf("Balance remaining after second payment: %f \n", secondPayment);
	printf("Balance remaining after third payment: %f \n", thirdPayment);
}
