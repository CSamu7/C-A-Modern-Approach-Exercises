#include <stdio.h>
#define LEN 2

int sum_two_dimensional_array(const int a[][LEN], int n);

int main(){
	int sum[2][LEN] = {{43,23},{21,32}};

	printf("%d", sum_two_dimensional_array(sum, 2));	
}

int sum_two_dimensional_array(const int a[][LEN], int n){
	int sum = 0;

	for(const int *p = &a[0][0]; p < &a[n-1][LEN]; p++){
		sum += *p;
	}

	return sum;
}

