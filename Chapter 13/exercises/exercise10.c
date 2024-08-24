#include <string.h>

char *duplicate(char *q, const char *p);

int main(){
	char s[20] = "Hola";
	char q[20];

	duplicate(q, s);
}

char *duplicate(char *q, const char *p){
	strcpy(q, p);
}

