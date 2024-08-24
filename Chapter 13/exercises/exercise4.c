#include <ctype.h>
#include <stdio.h>

int read_line(char str[], int n);

int main(){
	char string[20] = {};

	int lines = read_line(string, 20);

	printf("String with %d lines: %s", lines, string);
}

int read_line(char str[], int n){
	char c, *p = str;

	while(c = getchar(), isspace(c));

	do{
		if(p - str < n){
			*p++ = c;
		}
	}while(c = getchar(), !isspace(c) && c != '\n');

	if(c == '\n'){
		*p++ = '\n';
	}

	*p = '\0';

	return p - str - 1;
}

