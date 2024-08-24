#include <stdio.h>
#include <string.h>

int main(void){
	char word[20], small_word[20], largest_word[20];
	printf("Enter word: ");
	gets(word);

	strcpy(small_word, word);
	strcpy(largest_word, word);

	while(strlen(word) != 4){
		printf("Enter word: ");
		gets(word);

		if(strcmp(word, largest_word) > 0){
			strcpy(small_word, largest_word);
			strcpy(largest_word, word);
		}else if(strcmp(word, small_word) < 0){
			strcpy(small_word, word);
		}
	}

	printf("Largest word: %s\n", small_word);
	printf("Smallest word: %s", largest_word);
}

