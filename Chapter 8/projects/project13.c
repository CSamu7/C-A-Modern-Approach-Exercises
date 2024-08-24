#include <stdio.h>

int main(){
	char lastname[20], c, firstLetter;
	int pos = 0;

	printf("Enter a first and last name: ");

	while(c = getchar(), c == ' ');

	firstLetter = c;

	while(c = getchar(), c != ' ');

	while(c = getchar(), c != '\n'){
		lastname[pos] = c;
		pos++;
	}

	for(int i = 0; i < pos; i++){
		putchar(lastname[i]);
	}

	printf(", %c", firstLetter);
}

