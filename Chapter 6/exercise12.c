#include <stdio.h>

int main(){
	float euler, acc = 1, fac;
	int i = 1;

	printf("Enter e: ");
	scanf("%f", &euler);

	while(acc < euler){
		fac = i;
	
		for(int j = i - 1; j>0; j--){
			fac *= j;
		}

		float sum = (1 / fac);
		acc += sum;
		i++;
	}

	printf("The term becomes small in n = %d", i);
}

