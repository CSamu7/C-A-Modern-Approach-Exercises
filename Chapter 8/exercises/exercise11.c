#include <stdio.h>

int main(){
	char check_board[8][8];

	for(int i = 0; i<8; i++){
		for(int j = 0; j<8; j++){
			if(i + j % 2 == 0) {
				check_board[i][j] = 'B';
			}else{
				check_board[i][j] = 'R';
			}
			printf("%2c", check_board[i][j]);
		}
		printf("\n");
	}
}

