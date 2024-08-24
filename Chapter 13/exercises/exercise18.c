#include <stdio.h>

void remove_filename(char *url);

int main(){
	char s[] = "http://www.knking.com/index.html";

	remove_filename(s);

	printf("%s", s);
}

void remove_filename(char *url){
	char *last_slash;

	while(*url++){
		if(*url == '/'){
			last_slash = url;
		}
	}

	*last_slash = '\0';
}

