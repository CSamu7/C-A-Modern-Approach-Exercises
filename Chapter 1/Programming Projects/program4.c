#include <stdio.h>

int main(void) {
	float xValue;

	printf("Enter a value for x: ");
	scanf("%f", &xValue);

	float xSquare = xValue * xValue;
	float xCubic = xValue * xValue * xValue;
	float xToThePowerOfFour = xValue * xValue * xValue * xValue;
	float xToThePowerOfFive = xValue * xValue * xValue * xValue * xValue;

	float polynomial = (3 * xToThePowerOfFive) + (2 * xToThePowerOfFour) - (5 * xCubic) - (xSquare) + (7 * xValue) - 6;

	printf("The result is: %f", polynomial);
}

