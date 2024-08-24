#include <stdio.h>
#include <ctype.h>

int main(){
	int count = 0;
	char letter;

	printf("Enter a sentence: ");

	while(letter = getchar(), letter != '\n'){
		char upperLetter = toupper(letter);

		if(upperLetter == 'A' || upperLetter == 'E' || upperLetter == 'I' || upperLetter == 'O' || upperLetter == 'U'){
			count ++;
		}
	}

	printf("Your sentence contains %d vowels", count);

}

