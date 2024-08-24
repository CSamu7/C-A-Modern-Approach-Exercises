#include <stdio.h>
#include <stdbool.h>

int main(){
	int digit_repeated[10] = {0};
	int digit;
	long n;

	printf("Enter a number: ");
	
	while(scanf("%ld", &n), n != 0){
		while(n > 0){
			digit = n % 10;

			digit_repeated[digit] += 1;
	
			n /= 10;	
		}

		printf("Digit: \t\t");

		for(int i = 0; i<10; i++){
			printf("%3d ", i);
		}
	
		printf("\nOcurrences: \t");

		for(int i = 0; i<10; i++){			
			printf("%3d ", digit_repeated[i]);
			digit_repeated[i] = 0;
		}

		printf("\nEnter a number: ");
	}
}

