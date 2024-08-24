#include <stdio.h>

int main(){
	int number;

	printf("Escribe un numero entre 0 y 32767: ");
	scanf("%d", &number);

	int n1 = number % 8;
 	int n2 = (number / 8) % 8 ;
	int n3 = (number / 64) % 8 ;
	int n4 = (number / 512) % 8 ;
	int n5 = (number / 4096) % 8 ;

	printf("En octal, tu numero es: %d%d%d%d%d", n5,n4,n3,n2,n1);

	return 0;
}

