#include <stdio.h>

int main(){
	char c, reversalSentence[50];
	char *p = reversalSentence;

	printf("Enter a sentence: ");
	
	while(c = getchar(), c != '.' && c!= '?' && c != '!' && c != '\n'){
		*p++ = c;
	}

	for(char *p2 = --p; p2 >= reversalSentence; p2--){
		if(*(p2-1) == ' ' || p2 == reversalSentence){
			for(char *j = p2; j <= p ; j++){
				putchar(*j);
			}
		
			if(p2 != reversalSentence){
				putchar(' ');
			}

			p = p2 - 2;
		}
	}

	putchar(c);
}

