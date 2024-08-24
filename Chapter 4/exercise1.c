#include <stdio.h>

int main(){
	int number;

	printf("Escribe un numero de 3 digitos: ");
	scanf("%d", &number);

	int secondDigit = (number % 100) / 10;
	int firstDigit = number % 10;
	int thirdDigit = number / 100;

	printf("%d%d%d", firstDigit, secondDigit, thirdDigit);
	return 0;
}
