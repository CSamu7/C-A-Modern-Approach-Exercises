#include <stdio.h>
#include <stdbool.h>

int find_largest(int arr[], int n);

int main(){
	int temperatures[7][24] = {
					{25, 28, 31, 34, 32, 30, 31},
					{32},
					{29},
					{27},
					{31, 32},
					{31, 38},
					{39, 32, 33}
	};

	printf("%d",find_largest(temperatures[3], 24));
}

int find_largest(int arr[], int n){
	int largestTemperature = arr[0];

	for(int *p = arr; p<arr + n - 1; p++){
		if(*p > largestTemperature){
			largestTemperature = *p;
		}
	}

	return largestTemperature;	
}

