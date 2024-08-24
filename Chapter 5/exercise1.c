#include <stdio.h>

int main(){
	int number;

	printf("Enter a number: ");
	scanf("%d", &number);

	if(number > 0 && number < 10){
		printf("The number %d has 1 digit", number);	
	}else if(number >= 10 && number < 100){
		printf("The number %d has 2 digits", number);
	}else if(number >= 100 && number < 1000) {
		printf("The number %d has 3 digits", number);
	}
}

