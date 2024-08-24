#include <stdio.h>
#include <ctype.h>

int compute_scrabble_value(const char *word);

int main(){
	char word[20];
				
	printf("Enter a word: ");
	scanf("%s", word);

	int scrabbleValue = compute_scrabble_value(word);

	printf("Scrabble value: %d", scrabbleValue);
}

int compute_scrabble_value(const char *word){
	int scrabbleValue = 0;	
	
	while(*word){			
		switch(toupper(*word++)){
			case 'A': case 'E': case 'I': case 'L': case 'N': case 'O':
			case 'R': case 'S': case 'T': case 'U':
				scrabbleValue += 1;
				break;
			case 'D': case 'G':
				scrabbleValue += 2;
				break;
			case 'B': case 'C': case 'M': case 'P':
				scrabbleValue += 3;
				break;
			case 'F': case 'H': case 'V': case 'W': case 'Y':
				scrabbleValue += 4;
				break;
			case 'K':
				scrabbleValue += 5;
				break;
			case 'J': case 'X':
				scrabbleValue += 8;
				break;
			case 'Q': case 'Z':
				scrabbleValue += 10;
				break;
		}
	}

	return scrabbleValue;
}

