#include <stdio.h>

int main(){
	int n;
	float fac, acc = 1, sum;

	printf("Enter n: ");
	scanf("%d", &n);

	for(int i = 1; i<n; i++){
		fac = i;

		for(int j = i - 1; j>0 ;j--){
			fac *= j;
		}

		sum = (1 / fac);		
		acc += sum;
	}

	printf("e = %f", acc);
}
