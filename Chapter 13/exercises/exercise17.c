#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>

bool test_extension(const char *file_name, const char *extension);

int main(){
	bool test = test_extension("ocon.txt", "txt");
	bool btest = test_extension("paput.txt", "pdf");

	printf("%d\n", test);
	printf("%d", btest);
}

bool test_extension(const char *file_name, const char *extension){	
	while(*file_name++ != '.');

	while(*file_name++ && *extension++){
		if(toupper(*file_name) != toupper(*extension)){
			return false;
		}
	}

	return true;
}

