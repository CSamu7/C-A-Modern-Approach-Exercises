#include <stdio.h>
#include <ctype.h>

void capitalize(char str[]);

int main(){
	char string[] = "hola!! como estas?";

	capitalize(string);

	printf("%s", string);
}

void capitalize(char str[]){
	while(*str){
		*str++ = toupper(*str);
	}
}


