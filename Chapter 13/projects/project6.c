#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define NUM_PLANETS 9

int main(int argc, char *argv[]){
	char *planets[] = {"mercury", "venus", "earth", "mars", "jupiter", "saturn", "uranus", "neptune", "pluto"};
	int j;

	for(int i = 1; i < argc; i++){
		for(j = 0; j < NUM_PLANETS; j++){
			//lower-case
			for(int k = 0; k < strlen(argv[i]); k++){
				argv[i][k] = tolower(argv[i][k]);
			}
			
			if(strcmp(argv[i], planets[j]) == 0){
				printf("%s is planet %d\n", argv[i], j+1);
				break;
			}
		}

		if(j == NUM_PLANETS){
			printf("%s is not a planet\n", argv[i]);
		}
	}
}

