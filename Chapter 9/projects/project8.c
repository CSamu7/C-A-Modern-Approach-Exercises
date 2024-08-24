#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);

int main(){
	srand(time(NULL));

	int wins = 0, losses = 0;
	char c;

	do{
		printf("----------STARTING GAME-----------\n");

		if(play_game()){
			printf("You win! \n");
			++wins;
		}else{
			printf("You lose \n");
			++losses;
		}

		printf("Play again? ");
		c = getchar();
		getchar();
	}while(c == 'y');

	printf("\nWins: %d  Losses: %d\n", wins, losses);
}

int roll_dice(void){
	int firstDice = rand() % 6 + 1;
	int secondDice = rand() % 6 + 1;

	return firstDice + secondDice;
}

bool play_game(void){
	int point = roll_dice(), roll = 0;

	printf("You rolled: %d \n", point);
	printf("Your point is: %d \n", point);
	
	if(point == 11 || point == 7){
		return true;
	}


	while(roll = roll_dice(), point != roll){
		printf("You rolled: %d \n", roll);
		if(roll == 7) return false;
	}

	printf("You rolled %d \n", roll);

	return true;
}

