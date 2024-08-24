#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define N 30

void reverse_array(const char original_array[N], char result_array[N], int pos);
bool check_palindrome(const char array1[], int pos);

int main(){
	char message[N] = {0}, c;
	int pos = 0;

	printf("Enter a message: ");
	
	while(c = getchar(), c != '\n'){
		char letter = toupper(c);

		if(letter > 64 && letter < 91){
			message[pos++] = letter;
		}
	}

	check_palindrome(message, pos)
				 	? printf("Palindrome")
					: printf("Not a palindrome");
}

void reverse_array(const char original_array[N], char result_array[N], int pos){
	for(int i = 0; i<pos; i++){
		result_array[i] = original_array[pos-1-i];
	}
}

bool check_palindrome(const char array1[], int pos){
	char array2[N] = {0};

	reverse_array(array1, array2, pos);
				
	for(int i = 0; i<pos; i++){
		if(array1[i] != array2[i]){
			return false;
		}
	}

	return true;
}

