#include <stdio.h>

int main(){
	int numerator, denominator, n1, n2, gcd, remainder;

	printf("Enter a fraction: ");
	scanf("%d/%d", &numerator, &denominator);

	n1 = numerator;
	n2 = denominator;

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

	while(numerator % gcd == 0 && denominator % gcd == 0){
		numerator /= gcd;
		denominator /= gcd;
	}

	printf("In lowest terms: %d/%d", numerator, denominator);
}

