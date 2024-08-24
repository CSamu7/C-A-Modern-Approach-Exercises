#include <stdbool.h>
#include <stdio.h>

_Bool has_zero(int a[], int n);

int main(void){
	printf("%d", has_zero((int[]){1,2,3}, 3));
	printf("%d", has_zero((int[]){0,1,2}, 3));
}


_Bool has_zero(int a[], int n){
	for(int i = 0; i<n; i++){
		if(a[i] == 0){
			return true;
		}
	}

	//Move return from the for.
	return false;
}

