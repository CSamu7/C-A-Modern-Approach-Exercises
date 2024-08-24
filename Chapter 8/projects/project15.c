#include <stdio.h>

int main(){
	char message[80], ch;
	int shiftAmount, pos = 0;

	printf("Enter message to be encrypted: ");
	
	while(ch = getchar(), ch != '\n'){
		message[pos] = ch;
		pos++;
	}

	printf("Enter shift amount (1-25): ");
	scanf("%d", &shiftAmount);

	printf("Encrypted message: ");
	for(int i = 0; i<pos; i++){
		char converted = message[i];

		if('A' <= message[i] && message[i] <= 'Z'){
			converted = ((message[i] - 'A') + shiftAmount) % 26 + 'A';
		}

		if('a' <= message[i] && message[i] <= 'z'){
			converted = ((message[i] - 'a') + shiftAmount) % 26 + 'a';
		}

		putchar(converted);
	}
}

