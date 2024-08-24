#include <stdio.h>

int find_largest(int a[], int n);

int main(){
	int arr[4] = {1,2,3,4};

	printf("%d", find_largest(arr, 4));
}

int find_largest(int a[], int n){
	int max = a[0];

	for(int i = 0; i<n; i++){
		if(*(a+i) > max){
			max = *(a+i);
		}
	}

	return max;
}

