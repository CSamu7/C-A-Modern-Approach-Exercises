#include <stdio.h>
#include <stdbool.h>

#define N 6

bool search(const int a[], int n, int key);

int main(){
	int arr[N] = {1,2,3,4,5,6};
	
	printf("Result: %d",search(arr, N, 8));
}

bool search(const int a[], int n, int key){
	for(const int *p = a; p<a+n; p++){
		if(*p == key){
			return true;
		}
	}

	return false;
}


