#include <stdio.h>

int count_spaces(const char s[]);

int main(){
	int c = count_spaces("un espacio libre");

	printf("%d", c);
}


int count_spaces(const char s[]){
	int count = 0;

	while(*s++){
		if(*s == ' '){
			count++;
		}
	}

	return count;
}

