#include <stdio.h>

double compute_average_word_length(const char *sentence);

int main(){
	char sentence[50];

	printf("Enter a sentence: ");
	gets(sentence);

	double average = compute_average_word_length(sentence);

	printf("Average word length: %.1f", average);
}

double compute_average_word_length(const char *sentence){
	int characters = 0, word = 0;

	while(*sentence++){
		if(*sentence == ' '){
			word++;
			continue;
		}
	
		characters++;
	}

	word++;

	double average = (float) characters / word;

	return average;
}

