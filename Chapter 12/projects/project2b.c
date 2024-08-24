#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define N 30

void reverse_array(const char original_array[N], char result_array[N], char *pos);
bool check_palindrome(const char array1[], char *pos);

int main(){
	char message[N] = {0}, c;
	char *messageP = message; 

	printf("Enter a message: ");
	
	while(c = getchar(), c != '\n'){
		char letter = toupper(c);

		if(letter > 64 && letter < 91){
			*messageP++ = letter;
		}
	}

	check_palindrome(message, messageP)
				 	? printf("Palindrome")
					: printf("Not a palindrome");
}

void reverse_array(const char original_array[N], char result_array[N], char *pos){
	char *pointer_result = result_array;

	for(const char *p = pos-1; p>=original_array; p--){
		*pointer_result++ = *p;
	}
}

bool check_palindrome(const char array1[], char *pos){
	char array2[N] = {0};
	char *array2P = array2;

	reverse_array(array1, array2, pos);
				
	for(const char *p = array1; p<pos; p++){
		if(*p != *array2P++){
			return false;
		}
	}

	return true;
}

