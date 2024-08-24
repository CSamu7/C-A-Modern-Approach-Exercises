#include <stdio.h>

int main(){
	int size;

	printf("This program creates a magic square of a specified size.\n");
	printf("The size must be an odd number between 1 and 99\n");
	printf("Enter size of magic square: ");

	scanf("%d", &size);

	int magicSquare[size][size], row = 0, column = size / 2;

	for(int i = 0; i<size;i++){
		for(int j = 0; j<size; j++){
			magicSquare[i][j] = 0;
		}
	}

	for(int i = 1; i<=size*size; i++){
		if(column == size && row < 0){
			row += 2;
			column--;
		}

		if(column == size){
			column = 0;
		}

		if(row < 0){
			row = size - 1;
		}

		if(magicSquare[row][column] != 0){
			row += 2;
			column--;
		}

		magicSquare[row][column] = i;

		column++;
		row--;
	}

	printf("\n");
	
	for(int i = 0; i<size; i++){
		for(int j = 0; j<size; j++){
			printf("%4d", magicSquare[i][j]);
		}
		printf("\n");
	}
}

