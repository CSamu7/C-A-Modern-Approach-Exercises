#include <stdio.h>

int main(){
	int d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11,d12;

	printf("Escribe el codigo EAN (12 digitos):  ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&d1,&d2,&d3,&d4,&d5,&d6,&d7,&d8,&d9,&d10,&d11,&d12);

	int first_sum = d2 + d4 + d6 +d8 + d10 + d12;
	int second_sum = d1 + d3 + d5 + d7 + d9 + d11;

	int multiply = (first_sum * 3) + second_sum;
	int remainder = (multiply - 1) % 10;
	int checkDigit = 9 - remainder;

	printf("Check Digit: %d\n", checkDigit);

	return 0;
}

