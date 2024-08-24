#include <stdio.h>
void selection_sort(int a[], int n);

int main(void){
	int sort_array[7] = {2,6,1,4,9,5,10};

	selection_sort(sort_array, 7);

	for(int i = 0; i<7; i++){
		printf(" %d ", sort_array[i]);
	}

}

void selection_sort(int a[], int n){
	if(n == 0){
		return;
	}

	int large_element = a[0];
	int tempIndex = 0;

	for(int i = 1; i<n; i++){
		if(large_element <= a[i]){
			large_element = a[i];
			tempIndex = i;
		}
	}

	n--;

	a[tempIndex] = a[n];
	a[n] = large_element;

	selection_sort(a, n);
}




