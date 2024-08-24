#include <stdio.h>
#define N 10

void max_min(int b[], int n, int *big, int *small);

int main(void){
	int arr[N] = {34, 82, 49, 102, 7, 94, 23, 11, 50, 31};
	int big, small;

	max_min(arr, N, &big, &small);

	printf("Largest: %d\n Smallest: %d", big, small);
}


void max_min(int b[], int n, int *big, int *small){
	*big = *small = *b;

	for(int *p = b; p < b + n; p++){
		if(*p > *big){
			*big = *p;
		}else if(*p < *small){
			*small = *p;
		}
	}
}

