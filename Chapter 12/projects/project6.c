#include <stdio.h>
#define N 5

void quicksort(int a[], int *low, int *high);
int* split(int a[], int *low, int *high);

int main(){
	int a[N];
	printf("Enter %d numbers to be sorted: ", N);
	for(int *p = a; p<a+N; p++){
		scanf("%d", p);
	}

	quicksort(a, a, a+N-1);

	printf("In sorted order: ");
	for(int *p = a; p<a+N; p++){
		printf("%d ", *p);
	}

	printf("\n");
}

void quicksort(int a[], int *low, int *high){
	if(low >= high) return;

	int *middle = split(a, low, high);

	quicksort(a, low, middle - 1);
	quicksort(a, middle + 1, high);
}

//Funcion que escoge al elemento medio del array como pivote. 
int *split(int a[], int *low, int *high){
	int pivot = *low;

	while(1){
		//Buscamos 
		while(*low < *high && pivot <= *high){
			high--;
		}

		*low++ = *high;

		if(low >= high) break;
		
		while(low < high && *low <= pivot){
			low++;
		}

		if(low >= high) break;

		*high-- = *low;
	}

	*high = pivot;
	return high;
}


 
