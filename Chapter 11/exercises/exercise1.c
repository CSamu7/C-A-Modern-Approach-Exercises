#include <stdio.h>

int main(){
	int i = 3, *p = &i;

	printf("a) %d\n", *p);
	printf("b) %p\n", &p);
	printf("c) %p\n", *&p);
	printf("d) %p\n", &*p);
	printf("f) %p\n", &i);
	printf("g) %d\n", *&i);
}

