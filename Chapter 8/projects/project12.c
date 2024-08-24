#include <stdio.h>

int main(){
	const int letter_values[26] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
	char ch;
	int sum = 0;

	printf("Enter a word: ");

	while(ch = getchar(), ch != '\n'){
		sum += letter_values[ch - 97];
	}

	printf("Scrabble value: %d", sum);

}

