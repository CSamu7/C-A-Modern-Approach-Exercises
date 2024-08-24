#include <stdio.h>

int main(){
	int i = 3, *p, *q;
	
	p = *&q;
	p = q;
	*p = *q;
}

