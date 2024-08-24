#include <stdio.h>

int main(){
	int x; 
	long long fac = 1;

	printf("Enter a positive integer: ");
	scanf("%d", &x);

	for(int i = x; i>0; i--){
		fac *= i;
	}

	printf("Factorial of %d: %Ld", x, fac);

	/* 
		short = 7
		int = 19
		long = 20
		long long = 20

		float = 34
		double = 170
		long double = 1754
	*/


}

