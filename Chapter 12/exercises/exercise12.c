#include <stdio.h>

#define N 3

void find_two_largest(const int *a, int n, int *largest, int *second_largest);

int main(){
	int arr[N] = {23, 43, 12};
	int a, b;

	find_two_largest(arr, N, &a, &b);
	
	printf("%d %d", a, b);
}

void find_two_largest(const int *a, int n, int *largest, int *second_largest){
	const int *p = a;
	
	*largest = *second_largest = *a;

	while(p++ < a+n){
		if(*p > *largest){
			int temp = *largest;
			*largest = *p;
			*second_largest = temp;	
		}else if(*p > *second_largest){
			*second_largest = *p;
		}
	}
}

