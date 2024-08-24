#include <stdio.h>

int gcd(int m, int n);

int main(){
	printf("%d", gcd(10, 28));
}

int gcd(int m, int n){
	while(1){
		if(n == 0) return m;
	
		int remainder = m % n;

		m = n;
		n = remainder;
	}
}

