#include <stdio.h>

int main(){
	int word = 0, characters = 0; 
	float average;
	char c;			

	printf("Enter a sentence: ");

	while(c = getchar()){
		if(c == ' '){
			word++;
			continue;
		}
	
		if(c == '\n'){
			word++;
			break;
		}

		characters++;
	}

	average = (float)  characters / word;

	printf("Average word length: %.1f", average);

}

