#include <stdio.h>

#define N 6

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(){
	int arr[N] = {0,1,12,35,4,5}, largest, second_largest;

	find_two_largest(arr, N, &largest, &second_largest);

	printf("Largest: %d, Second Largest: %d \n", largest, second_largest);
}

void find_two_largest(int a[], int n, int *largest, int *second_largest){
	*second_largest = *largest = a[0];

	for(int i = 0; i<n; i++){
		if(*largest < a[i]){
			*second_largest = *largest;
			*largest = a[i];
			continue;
		}

		if(*second_largest < a[i]){
			*second_largest = a[i];
		}

	}
}

