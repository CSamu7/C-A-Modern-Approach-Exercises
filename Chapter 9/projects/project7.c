#include <stdio.h>
int power(int x, int y);

int main(){
	double x, y;

	printf("Enter a number: ");
	scanf("%lf", &x);

	printf("Enter the exponent: ");
	scanf("%lf", &y);

	printf("Result: %d", power(x, y));
}

int power(int x, int y){
	if(y == 0) return 1;
	
	if(y % 2 == 0) {
		return power(x, y/2) * power(x, y / 2);
	}else{
		return x * power(x, y-1);
	}
}


