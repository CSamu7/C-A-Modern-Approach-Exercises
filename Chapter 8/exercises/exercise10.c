#include <ctype.h>
#include <stdio.h>

int main(){
	char pieces [8] = {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'};
	int square = 0;

	char chess_board[8][8] = {0};

	for(int i = 0; i<8; i++){
		for(int j = 0; j<8; j++){
			if((square + j) % 2){
				chess_board[i][j] = '.';
			}else{
				chess_board[i][j] = ' ';
			}

			if(i == 0){
				chess_board[i][j] = pieces[j];
			}else if(i == 7){
				chess_board[i][j] = toupper(pieces[j]);
			}else if(i == 1 || i == 6){
				chess_board[i][j] = 'p';
			}

			printf(" %c ", chess_board[i][j]);
		}

		if(i % 2){
			square = 0;
		}else{
			square = 1;
		}
		printf("\n");
	}
}
