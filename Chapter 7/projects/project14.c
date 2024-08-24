#include <stdio.h>
#include <math.h>

int main(){;
	double x, y, averageXY = 1;

	printf("Enter a positive number: ");
	scanf("%lf", &x);

	do{
		y = averageXY;
		averageXY = (y + (x/y))/ 2;
	}while(fabs(y - averageXY) > (y*.00001));

	printf("Square root: %lf", averageXY);
}

