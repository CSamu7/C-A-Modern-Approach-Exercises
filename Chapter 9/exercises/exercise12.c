#include <stdio.h>

double inner_product(double a[], double b[], int n);

int main(){
	double c[] = {1,3.4,5};
	double d[] = {3,2,5};

	printf("%lf", inner_product(c, d, 3));
}

double inner_product(double a[], double b[], int n){
	double sum = 0;

	for(int i = 0; i<n; i++){
		double product = a[i] * b[i];
	 	sum += product;	
	}

	return sum;
}

