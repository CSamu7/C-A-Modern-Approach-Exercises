#include <stdio.h>

void censor(char str[]);

int main(){
	char str[] = "food fool foo fooood";

	censor(str);

	printf("%s", str);
}

void censor(char str[]){
	char match[] = "foo";
	
	char *p = match;
	char *pos = str;

	while(*str != '\0'){
		while(*str++ == *p++ && *p != '\0');

		if(!*p){
			while(pos < str){
				*pos++ = 'x';
			}
		}else{
			pos = str;
		}

		p = match;
	}
}



