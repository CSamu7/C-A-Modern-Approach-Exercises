#include <stdio.h>

int main(){
	char firstLetter = '%', letter;
	int space = 0;

	printf("Enter a first and last name: ");
	
	while(letter = getchar(), letter != '\n'){
		if(letter != ' ' && firstLetter == '%'){
			firstLetter = letter;
			continue;
		}

		if(letter == ' ' && firstLetter != '%'){
			space = 1;
			continue;
		}

		if(space && letter != ' '){
			putchar(letter);
		}
	}
	printf(", %c.", firstLetter);
}

