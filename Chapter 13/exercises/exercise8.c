#include <stdio.h>
#include <string.h>

int main(){
	char str[20] = "";

	strcpy(str, "tire-bouchon");
	strcpy(&str[4], "d-or-wi");
	strcat(str, "red?");

	printf("%s", str);
}

