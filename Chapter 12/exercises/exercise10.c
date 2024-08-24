#include <stdio.h>

int *find_middle(int a[], int n);

int main(){
	int arr[5] = {1,2,3,4,5};
	int *a = find_middle(arr, 5);

	printf("%d", *a);
}


int *find_middle(int a[], int n){
	return a+(n/2);
}


