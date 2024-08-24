#include <stdio.h>

void avg_sum(double a[], int n, double *avg, double *sum);

int main(){
	double sum, avg, arr[4] = {1,2,3,4};

	avg_sum(arr, 4, &avg, &sum);

	printf("%lf, %lf", avg, sum);
}

void avg_sum(double a[], int n, double *avg, double *sum){
	*sum = 0.0;
	for(int i = 0; i<n; i++){
		*sum += a[i];
	}

	*avg = *sum /n;
}


