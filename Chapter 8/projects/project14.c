#include <stdio.h>

int main(){
	char c, reversalSentence[50];
	int pos = 0;
	printf("Enter a sentence: ");
	
	while(c = getchar(), c != '.' && c!= '?'){
		reversalSentence[pos] = c;
		pos++;
	}

	for(int i = pos; i >= 0; i--){
		if(reversalSentence[i-1] == ' ' || i == 0){
			for(int j = 0; j < (pos - i); j++){
				putchar(reversalSentence[i+j]);
			}
		
			if(i != 0){putchar(' ');}
			pos = i - 1;
		}
	}

	putchar(c);
}

