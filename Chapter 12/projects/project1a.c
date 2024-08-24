#include <stdio.h>
#define N 30

int main(){
	char message[N] = {' '}, c;
	int pos = 0;

	printf("Enter a message: ");

	while(c = getchar(), c != '\n' && pos < N){
		message[pos++] = c;
	}

	for(int i = pos; i>=0; i--){
		printf("%c", message[i]);
	}
}

