#include <stdio.h>

int main(){
	int arr[4] = {5, 32, 93, 1};
	int *low = arr, *high = &arr[2], *middle = arr;

	middle = (high - low) / 2 + low;
	printf("%d", *middle);
}


