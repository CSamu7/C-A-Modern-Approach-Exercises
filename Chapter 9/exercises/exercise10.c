#include <stdio.h>

int largestElement(int n, int a[]);
int average(int n, int a[]);
int positiveElements(int n, int a[]);

int main(){
	printf("%d\n", average(5, (int []){20,20,20,15,20}));
	printf("%d\n", largestElement(5, (int []){20,120,340,15,20}));
	printf("%d\n", positiveElements(5, (int []){20,20,-20,15,-20}));
}

int average(int n, int a[n]){
	int acc = 0;

	for(int i = 0; i<n; i++){
		acc += a[i];
	}

	return acc / n;
}


int largestElement(int n, int a[n]){
	int largeElement = a[0];

	for(int i = 0; i<n; i++){
		if(a[i] > largeElement){
			largeElement = a[i];
		}
	}

	return largeElement;
}

int positiveElements(int n, int a[n]){
	int count = 0;

	for(int i = 0; i<n; i++){
		if(a[i] > 0){
			count++;
		}
	}

	return count;
}

