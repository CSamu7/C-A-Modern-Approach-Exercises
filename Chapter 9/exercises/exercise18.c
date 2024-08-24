#include <stdio.h>

int gcd(int m, int n);

int main(void){
	printf("%d", gcd(26,4));
	return 0;
}


int gcd(int m, int n){
	return n == 0 ? m : gcd(n, m % n);
}

