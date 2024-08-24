#include <stdio.h>

int main(){
	int fib[40] = {0,1};

	for(int i= 0; i<40; i++){
		fib[i+2] = fib[i+1] + fib[i];
		printf("Position: %d. Number: %d\n", i, fib[i]);
	}

}

