#include <stdio.h>

void store_zeros(int a[], int n);

int main(){
	int arr[5] = {1,2,3,4,5};

	store_zeros(arr, 5);

	for(int i = 0; i<5; i++){
		printf("%d\n", arr[i]);
	}

}

void store_zeros(int a[], int n){
	for(int *p = a; p<a+n; p++){
		*p = 0;
	}
}
