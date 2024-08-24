#include <stdio.h>
#include <stdbool.h>

int main(){
	int digit_repeated[10] = {0};
	int digit;
	long n;

	printf("Enter a number: ");
	scanf("%ld", &n);

	while(n > 0){
		digit = n % 10;

		digit_repeated[digit] += 1;
	
		n /= 10;	
	}

	printf("Repeated digits: ");
	
	for(int i = 0; i<10; i++){
		if(digit_repeated[i] >= 2){
			printf("%d", i);
		}
	}

}
