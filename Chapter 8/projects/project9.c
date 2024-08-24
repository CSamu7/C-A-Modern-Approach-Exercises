#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(){
	int x = 0, y = 0, movement, movementsAvailable = 4;
	char path[10][10] = {0};
	bool movements_made[4];
	
	srand(time(NULL));	

	for(char letter = 'a'; letter >= 'a' && letter <= 'z'; letter++){
		if(path[0][0] == 0){
			path[0][0] = letter;
			continue;
		}

		movementsAvailable = 4;

		while(movementsAvailable > 0){
			int movement = rand() % 4;

			if(!movements_made[movement]){
				movements_made[movement] = true;
			}

			movementsAvailable = 4;

			for(int i = 0; i<4; i++){
				if(movements_made[i]){
					movementsAvailable--;
				}
			}

			if(movement == 0 && path[x-1][y] == 0 && x - 1 >= 0){
				path[--x][y] = letter;
				break;
			}

			if(movement == 1 && path[x][y+1] == 0 && y + 1 < 10){
				path[x][++y] = letter;
				break;
			}

			if(movement == 2 && path[x+1][y] == 0 && x + 1 < 10){
				path[++x][y] = letter;
				break;
			}
			if(movement == 3 && path[x][y-1] == 0 && y - 1 >= 0){
				path[x][y] = letter;
				break;
			}
		}

		for(int i = 0; i<4; i++){
			movements_made[i] = false;
		}
	}	
		
	for(int i = 0; i<10; i++){
		for(int j = 0; j<10; j++){
			if(path[i][j] == 0){
				path[i][j] = '.';
			}

			printf("%2c",path[i][j]);
			
			}
		printf("\n");
	}
}

