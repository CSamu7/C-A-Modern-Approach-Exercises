#include<stdio.h>
#define FRACTION (4.0f / 3.0f)
#define PI 3.1416f

int main(void){
	float ratio;

	printf("Enter the ratio: ");
	scanf("%f", &ratio);

	float cubicRatio = ratio * ratio * ratio;
	float result = FRACTION * PI * cubicRatio;

	printf("The volume is %f", result);
}
