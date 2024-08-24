#include <stdio.h>
#define N 30

int main(){
	char message[N] = {' '}, c;
	char *pos = message;

	printf("Enter a message: ");

	while(c = getchar(), c != '\n' && pos < message + N){
		*pos++ = c;
	}

	for(char *p = pos; p>=message; p--){
		printf("%c", *p);
	}
}

