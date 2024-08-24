#include <stdio.h>
#include <ctype.h>

int compute_vowel_count(const char *sentence);

int main(){
	char sentence[50];
	printf("Enter a sentence: ");
	gets(sentence);

	int total = compute_vowel_count(sentence);
	printf("Your sentence contains %d vowels", total);
}

int compute_vowel_count(const char *sentence){
	int count = 0;

	while(*sentence){
		char upperLetter = toupper(*sentence++);

		if(upperLetter == 'A' || upperLetter == 'E' || upperLetter == 'I' || upperLetter == 'O' || upperLetter == 'U'){
			count++;
		}
	}

	return count;
}

