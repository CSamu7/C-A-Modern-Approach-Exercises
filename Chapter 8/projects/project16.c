#include <stdio.h>

int main(){
	char lettersSeen[26] = {0}, ch;

	printf("Enter first word: ");
	while(ch = getchar(), ch != '\n'){
		if('a' <= ch && ch <= 'z'){
			lettersSeen[ch - 97] += 1;
		}
	}

	printf("Enter second word: ");
	while(ch = getchar(), ch != '\n'){
		if('a' <= ch && ch <= 'z'){
			lettersSeen[ch - 97] -= 1;
		}
	}

	for(int i = 0; i<26; i++){
		if(lettersSeen[i] != 0){
			printf("The words are not anagrams.");
			break;
		}

		if(i == 25){
			printf("The words are anagrams");
		}
	}
}


