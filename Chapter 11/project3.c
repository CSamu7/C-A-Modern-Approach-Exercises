#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(){
	int numerator, denominator, reduced_numerator, reduced_denominator;

	printf("Enter a fraction: ");
	scanf("%d/%d", &numerator, &denominator);

	reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);

	printf("%d/%d => %d/%d", numerator, denominator, reduced_numerator, reduced_denominator);
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator){
	int n1 = numerator;
	int n2 = denominator;

	int remainder, gcd;

	while(n1 != 0 && n2 != 0){
		if(n1 > n2){
			remainder = n1 % n2;
			n1 = n2;
			n2 = remainder;
		}else{
			remainder = n2 % n1;
			n2 = n1;
			n1 = remainder;
		}
	}

	if (n1 == 0){
		gcd = n2;
	}else{
		gcd = n1;
	}
	
	*reduced_numerator = numerator;
	*reduced_denominator = denominator;

	if(gcd < 2) return;

	while(*reduced_numerator % gcd == 0 && *reduced_denominator % gcd == 0){
		*reduced_numerator /= gcd;
		*reduced_denominator /= gcd;
	}
}

