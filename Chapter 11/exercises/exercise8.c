#include <stdio.h>

#define N 3

int *find_largest(int a[], int n);

int main(){
	int arr[N] = {34,543,532}, *p;

	p = find_largest(arr, N);

	printf("%d", *p);
}


int *find_largest(int a[], int n){
	int *largest;

	largest = &a[0];

	for(int i = 0; i<n; i++){
		if(*largest < a[i]){
			largest = &a[i];
		}
	}

	return largest;
}

