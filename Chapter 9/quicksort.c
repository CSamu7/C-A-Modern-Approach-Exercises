#include <stdio.h>
#define N 10

void quicksort(int a[], int low, int high);
int split(int a[], int low, int high);

int main(){
	int a[N];

	printf("Enter %d numbers to be sorted: ", N);
	for(int i = 0; i<N; i++){
		scanf("%d", &a[i]);
	}

	quicksort(a, 0, N-1);

	printf("In sorted order: ");
	for(int i = 0; i<N; i++){
		printf("%d ", a[i]);
	}

	printf("\n");
}

void quicksort(int a[], int low, int high){
	int middle;

	//**
	if(low >= high) return;

	middle = split(a, low, high);

	//Busca realizar la 
	quicksort(a, low, middle - 1);
	quicksort(a, middle + 1, high);
}

//Funcion para saber desde que posición vamos a partir el array.
int split(int a[], int low, int high){
	int part_element = a[low];

	for(;;){
		while(low < high && part_element <= a[high]){
			high--;
		}

		if(low >= high) break;

		a[low++] = a[high];

		while(low < high && a[low] <= part_element){
			low++;
		}

		if(low >= high) break;
		a[high--] = a[low];
	}

	a[high] = part_element;
	return high;
}


 
