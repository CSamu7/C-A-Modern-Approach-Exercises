#include <stdio.h>

int main(){
	float n, prevNumber = 0, largestNumber;

	do{
		printf("Enter a number: ");
		scanf("%f", &n);
	
		if(n > prevNumber) {
			largestNumber = n;
			prevNumber = n;
		}else{
			prevNumber = n;
		}

	}while(n != 0);	

	printf("The largest number entered was %f", largestNumber);
}

