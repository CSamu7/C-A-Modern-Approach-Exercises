#include <stdio.h>

int f(int a[]);

int main(){
/*	double x,y,z;

	printf("Enter three numbers: ");
	scanf("%lf%lf%lf", &x, &y, &z);

	printf("Average of %g and %g: %g\n", x, y, average(x,y));
	printf("Average of %g and %g: %g\n", y, z, average(y,z));
	printf("Average of %g and %g: %g\n", x, z, average(x,z));
*/
	int a[3] = {5,3,9};

	for(int i = 0; i<3; i++){
		printf(" %d ", a[++i]);
	}


	/*
	int b[3] = {0};
	
	f(b);
*/
}
/*
int f(int a[]){
	int len = sizeof(a) / sizeof(a[0]);
}


double average(double a, double b){
	return (a+b) / 2;
}

*/
