#include <stdio.h>

void get_extension(const char *file_name, char *extension);

int main(){
	char file_name[] = "guadalupe.txt";
	char ext[5];

	get_extension(file_name, ext);

	printf("%s", ext);
}

void get_extension(const char *file_name, char *extension){				
	while(*file_name++ != '.');

	while(*file_name != '\0'){
		*extension++ = *file_name++;
	}

	*extension = '\0';
}



