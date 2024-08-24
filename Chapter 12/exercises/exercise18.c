#include <ctype.h>
#include <stdio.h>

int evaluate_position(char board[8][8]);

int main(){
	char board[8][8] = {
		{'R', 'N', 'B', 'K', 'Q', ' ', ' ', 'R'},
		{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
		{0},
		{'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
		{'r', 'n', 'b', 'k', 'q', 'b', 'n', ' '}
	};

	printf("Ventaja de las piezas blancas: %d", evaluate_position(board));
}

int evaluate_position(char board[8][8]){
	int total = 0, value; 

	for(char *p = &board[0][0]; p<&board[8][8]; p++){
		switch(*p){
			case 'R': case'r':
				value = 5;
				break;
			case 'N': case 'n':
				value = 3;
				break;
			case 'B': case 'b':
				value = 3;
				break;
			case 'Q': case 'q':
				value = 9;
				break;
			case 'P': case 'p':
				value = 1;
				break;
			default:
				value = 0;
				break;
		}
		
		if(islower(*p)){
			total -= value;								
		}else{
			total += value;
		}
	}

	return total;
}
