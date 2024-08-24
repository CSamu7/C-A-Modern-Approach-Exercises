#include <stdio.h>

void decompose(double x, long *int_part, double *frac_part);

int *max(int *a, int *b);

int main(){
	long int_part;
	double frac_part;
	int *p, j = 5, i = 9;

	p = max(&j, &i);

	printf("p: %d", *p);

	decompose(4.43434, &int_part, &frac_part);

	printf("%ld %lf", int_part, frac_part);	
	/*	int *p, *q, a = 3;

	p = &a;

 	a = 5;

	q = p;

	printf("Variable a: %d\n", a);
	printf("Variable p: %d", *p);
	printf("Variable p: %d", *q);
*/	
}

void decompose(double x, long *int_part, double *frac_part){
	*int_part = (long) x;
	*frac_part = x - *int_part;
}

int *max(int *a, int *b){
	if(*a > *b){
		return a;
	}else{
		return b;
	}
}



