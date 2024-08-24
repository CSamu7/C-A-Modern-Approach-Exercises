#include <stdio.h>

#define COLUMNS 20
#define ROWS 30

int main(){
	char words[ROWS][COLUMNS];
	char c;
	int i, j = 0;

	printf("Enter a sentence: ");

	while(c = getchar(), c != '\n'){	
		if(c == ' '){
			words[i++][j] = '\0';
			j = 0;
		}else{
			words[i][j++] = c;
		}
	}

	for(int p = i; p >= 0; p--){
		for(int s = 0; words[p][s]; s++){
			printf("%c", words[p][s]);
		}

		printf(" ");
	}
}

