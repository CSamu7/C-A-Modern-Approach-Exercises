#include <stdio.h>

#define N 5

void fill_zero(int arr[], int n);

int main(){
	int *a, b[N] = {10,22,33,44,55}, *c, d;

	int sum = 0;

	for(int *p = &b[0]; p < &b[N]; p++){
		sum += *p;
	}

	//* and ++

	int *e = &b[0];

	*e++; //Aumenta la dirección de memoria después
	(*e)++; //Aumenta el valor después
	*++e; //Aumenta la dirección de memoria ahora
	++*e; //Aumenta el valor ahora.

	/*for(int *p = a; p < a+N; p++){
		sum += *p;
	}*/

	//printf("%d", sum);

	fill_zero(&b[2], 3);

	for(int i = 0; i<N; i++){
		printf("%d\n", b[i]);
	}

	//Arrays multidimensionales

	int mult[2][2] = {{2,3}, {23,4}};

	for(int *p = &a[0]; p<= &a[1][1]; p++){
		*p = 0;
	}

	for(int *p = *mult; p <= *mult + 3; p++){
		printf("%d", *p);
	}
}


void fill_zero(int arr[], int n){
	for(int i = 0; i<n; i++){
		arr[i] = 0;
	}
}

