#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int sum = 0, number;
				
	for(int i = 0; i<argc; i++){
		number = atoi(argv[i]);
		sum += number;
	}

	printf("Total: %d", sum);
}

