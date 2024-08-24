#include <stdio.h>

void swap(int *p, int *q);

int main(){
	int i = 5, j = 9;

	printf("i = %d, j = %d\n", i, j);

	swap(&i, &j);

	printf("i = %d, j = %d", i, j);
}


void swap(int *p, int *q){
	int temp = *p;

	*p = *q;
	*q = temp;
}

