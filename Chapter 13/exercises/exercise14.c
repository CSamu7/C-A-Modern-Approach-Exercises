#include <stdio.h>

int main(void){
	char s[] = "Hsjodi", *p;

	for(p = s; *p; p++){
		--*p;
	}

	//Grinch
	puts(s);
	return 0;
}

