#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int temperature_readings[30][24] = {0}, avg = 0;
	srand(time(NULL));
	
	for(int i = 0; i<30; i++)
	{
		for(int j = 0; j<24; j++){
			int rnd = rand() % 50;
			temperature_readings[i][j] = rnd;
			avg += rnd;			
		}
	}

	printf("Average %d", avg / 720);
}

