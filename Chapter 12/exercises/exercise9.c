#include <stdio.h>

double inner_product(const double *a, const double *b, int n);

int main(){
	double arr[4] = {1,2,3,4};
	double arr2[4] = {2,3,4,5};

	double *a = arr, *b = arr2;

	printf("%f", inner_product(a, b, 4));
}

double inner_product(const double *a, const double *b, int n){
	double result = 0;

	for(int p = 0; p<n; p++){
		result += *(a+p) * *(b+p);
	}

	return result;
}
