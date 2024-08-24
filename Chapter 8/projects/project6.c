#include <stdio.h>
#include <ctype.h>

int main(){
	int length = 0;
	char c, message[100];

	printf("Enter message: ");

	while(c = getchar(), c!= '\n'){
		message[length] = toupper(c);
		length++;
	}

	printf("In B1FF-speak: ");

	for(int i = 0; i<length; i++){
		switch(message[i]){
			case 'A':
				printf("4");
				break;
			case 'B':
				printf("8");
				break;
			case 'E':
				printf("3");
				break;
			case 'I':
				printf("1");
				break;
			case 'O':
				printf("0");
				break;
			case 'S':
				printf("5");
				break;
			default:
				printf("%c", message[i]);
		}
	}

	printf("!!!!!!!!!!");
}

