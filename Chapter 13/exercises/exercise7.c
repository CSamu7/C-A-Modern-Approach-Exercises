#include <stdio.h>
#include <string.h>

int main(){
	char str[] = "";

	*str = 0;
	printf("String: %sF\n", str);
	str[0] = '\0';
	printf("String: %sF\n", str);
	strcpy(str, "");
	printf("String: %sF\n", str);
	strcat(str, "");
	printf("String: %sF\n", str);
}


