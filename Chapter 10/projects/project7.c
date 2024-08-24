#include <stdio.h>
#include <stdbool.h>

#define MAX_DIGITS 10

void clear_array(void);
void process_digit(int digit, int position);
void print_digits(void);

const bool segments[MAX_DIGITS][MAX_DIGITS] = {
	{1, 1, 0, 1, 1, 1, 1},
	{0, 0, 0, 1, 0, 0, 1},
	{1, 0, 1, 1, 1, 1},
	{1, 0, 1, 1, 0, 1, 1},
	{0, 1, 1, 1, 0, 0, 1},
	{1, 1, 1, 0, 0, 1, 1},
	{1, 1, 1, 0, 1, 1, 1},
	{1, 0, 1, 1, 0, 0, 1},
	{1, 1, 1, 1, 1, 1, 1},
	{1, 1, 1, 1, 0, 0, 1},
};

char digits[3][MAX_DIGITS*4] = {};

int main(void){
	char ch;
	int digits_counter = 0;

	clear_array();
	printf("Enter a number: ");

	while(ch = getchar(), ch != '\n' && digits_counter < MAX_DIGITS){
		if(ch < 48 || ch > 57){
			continue;
		}

		int number = ch - '0';

		process_digit(number, digits_counter);	
		digits_counter++;
	}

	print_digits();
}

void clear_array(void){
	for(int i = 0; i<3; i++){
		for(int j = 0; j<MAX_DIGITS*4; j++){
			digits[i][j] = ' ';
		}
	}
}

/*void clear_digits_array(void){}*/
void process_digit(int digit, int position){
	const char pattern[3] = {'|', '_', '|'};

	int startPosition = (position * 3) + position;

	if(segments[digit][0]){
		digits[0][startPosition+1] = '_';
	}

	for(int i = 1, pat = 1; i<3; i++){
		for(int j = 0; j<3; j++, pat++){
			if(segments[digit][pat]){		
				digits[i][startPosition+j] = pattern[j];
			}else{
				digits[i][startPosition+j] = ' ';
			}	
		}
	}
}


void print_digits(void){	
	for(int i = 0; i<4; i++){
		for(int j = 0; j<MAX_DIGITS * 4; j++){
			putchar(digits[i][j]);
		}
		putchar('\n');
	}
}


