#include <stdio.h>

int main(void){
	int d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11;

	printf("Enter 11 digits: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1,&d2,&d3,&d4,&d5,&d6,&d7,&d8,&d9,&d10,&d11);

	int first_sum = d1 + d3 + d5 + d7 + d9 + d11;
	int second_sum = d2 + d4 + d6 + d8 + d10;

	int total = 3 * first_sum + second_sum;
	int checkDigit = 9 - (total - 1) % 10;

	printf("Check digit: %d", checkDigit);
}

