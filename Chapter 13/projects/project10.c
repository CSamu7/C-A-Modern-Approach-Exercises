#include <stdio.h>

void reverse_name(char *name);

int main(){
	char name[20];

	printf("Enter a first and last name: ");
	gets(name);

	reverse_name(name);

	printf("%s", name);
}

void reverse_name(char *name){
	char *p = name;
	
	while(*p == ' ') {p++;}

	char firstLetter = *p;

	while(*p++ != ' ');

	while(*p == ' ') {p++;}

	while(*p && *p != ' '){
		*name++ = *p++;
	}

	*name++ = ',';
	*name++ = firstLetter;
	*name++ = '\0';
}
