#include <stdio.h>

void pb(int n);

int main(void){
	//Transform a decimal number to binary.
	pb(12);
}

void pb(int n){
	if(n != 0){
		pb(n / 2);
		putchar('0' + n%2);
	}
}

