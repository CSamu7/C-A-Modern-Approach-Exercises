#include <stdio.h>

void encrypt(char *message, int shift);

int main(){
	char message[80];
	int shiftAmount;

	printf("Enter message to be encrypted: ");	
	fgets(message, 80, stdin);

	printf("Enter shift amount (1-25): ");
	scanf("%d", &shiftAmount);

	encrypt(message, shiftAmount);

	printf("Encrypted message: %s", message);
}

void encrypt(char *message, int shift){
	while(*message){
		if('A' <= *message && *message <= 'Z'){
			*message = ((*message - 'A') + shift) % 26 + 'A';
		}
		
		if('a' <= *message && *message <= 'z'){
			*message = ((*message - 'a') + shift) % 26 + 'a';
		}

		message++;		
	}
}


