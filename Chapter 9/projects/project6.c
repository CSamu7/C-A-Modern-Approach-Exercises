#include <stdio.h>

double calc_polynomial(double x);
double pow(double x, double y);

int main(void){
	double x;

	printf("Enter the value of x: ");
	scanf("%lf", &x);

	printf("Result: %lf", calc_polynomial(x));	
}

double pow(double x, double y){
	double result = x;

	for(int i = 1; i<y; i++){
		result *= x;
	}

	return result;
}


double calc_polynomial(double x){
	double fifth = 3 * (pow(x, 5));
	double fourth = 2 * pow(x, 4);
	double third = 5 * pow(x, 3);
	double second = pow(x, 2);
	double first = 7 * x;

	return fifth + fourth - third - second + first - 6;
}


