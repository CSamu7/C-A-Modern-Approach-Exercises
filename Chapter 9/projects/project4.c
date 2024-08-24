#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(void){
	int count[26] = {0}, count2[26] = {0};

	printf("Enter a word: ");
	read_word(count);

	printf("Enter the second word: ");
	read_word(count2);

	if(equal_array(count, count2)){
		printf("The words are analgrams");
	}else{
		printf("The words are not analgrams");
	}
}

void read_word(int counts[26]){
	char c;
	
	while(c = getchar(), c != '\n'){
		counts[tolower(c) - 97]++;
	}
}

bool equal_array(int counts1[26], int counts2[26]){
	for(int i = 0; i<26; i++){
		if(counts1[i] != counts2[i]){
			return false;
		}
	}

	return true;
}

