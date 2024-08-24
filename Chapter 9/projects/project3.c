#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main(){
	char path[10][10] = {false};

	generate_random_walk(path);

	print_array(path);
}

void generate_random_walk(char walk[10][10]){
	srand(time(NULL));

	int x = 0, y = 0, movement = 0;
	int movements_available = 4;
	int movements_made[4] = {true};
	char letter = 'a';

	walk[0][0] = letter++;

	for(letter; letter<='z'; letter++){
if(walk[0][0] == 0){
			walk[0][0] = letter;
			continue;
		}

		movements_available = 4;

		while(movements_available > 0){
			int movement = rand() % 4;

			if(!movements_made[movement]){
				movements_made[movement] = true;
			}

			movements_available = 4;

			for(int i = 0; i<4; i++){
				if(movements_made[i]){
					movements_available--;
				}
			}

			if(movement == 0 && walk[x-1][y] == 0 && x - 1 >= 0){
				walk[--x][y] = letter;
				break;
			}

			if(movement == 1 && walk[x][y+1] == 0 && y + 1 < 10){
				walk[x][++y] = letter;
				break;
			}

			if(movement == 2 && walk[x+1][y] == 0 && x + 1 < 10){
				walk[++x][y] = letter;
				break;
			}
			if(movement == 3 && walk[x][y-1] == 0 && y - 1 >= 0){
				walk[x][--y] = letter;
				break;
			}
		}

		for(int i = 0; i<4; i++){
			movements_made[i] = false;
		}		
	
	}
}

void print_array(char walk[10][10]){
	for(int i = 0; i<10; i++){
		for(int j = 0; j<10; j++){
		 	if(!walk[i][j]){
				printf("%2c", '.');
			}else{
				printf("%2c", walk[i][j]);
			}
		}
		printf("\n");
	}
}

