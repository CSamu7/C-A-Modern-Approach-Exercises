#include <stdio.h>

int main(){
	int number;

	printf("Enter a number: ");
	scanf("%d", &number);

	do{
		printf("%d", number % 10);
		number /= 10;
	}while(number != 0);
}

