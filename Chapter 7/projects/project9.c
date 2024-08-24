#include <stdio.h>
#include <ctype.h>

int main(){
	int h1, m1, h2;
	char t;

	printf("Enter a 12-hour time: ");
	scanf("%d:%d", &h1, &m1);
	while(t = getchar(), t == ' ');

	if(toupper(t) == 'P'){
		h2 = (12 + h1);
		printf("Equivalent 24-hour time %d:%d", h2, m1);
	}else{
		printf("Equivalent 24-hour time %d:%d", h1, m1);
	}
}

