// Name: Box
// Purpose: Calculate volume and dimensional weight
// Author: Samuel Perez

#include <stdio.h>

int main(void){
	float height, length, width, volume, weight;
	printf("Enter height of box: ");
	scanf("%f", &height);

	printf("Enter length of box: ");
	scanf("%f", &length);

	printf("Enter width of box: ");
	scanf("%f", &width);

	volume = height * length * width;
	weight = (volume + 165 ) / 166;

	printf("Volume: %f", volume);
	printf("Dimensional weight: %f", weight);

	return 0;
}

