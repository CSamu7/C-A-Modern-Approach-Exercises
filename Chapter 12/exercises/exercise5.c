#include <stdio.h>

int main(){
	int a[5] = {1,2,3,4,5};
	int *p = a;

	//printf("%d,", p == a[0]);
	printf("%d,", p == &a[0]);
	printf("%d,", *p == a[0]);
	printf("%d", p[0] == a[0]);
}

