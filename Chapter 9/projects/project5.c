#include <stdio.h>

void create_magic_square(int n, int magic_square[n][n]);
void print_magic_square(int n, int magic_square[n][n]);

int main(void){
	int length;

	printf("Enter the number of the magic square: ");
	scanf("%d", &length);

	int magic_square[length][length];

	for(int i = 0; i < length; i++){
		for(int j = 0; j< length; j++){
			magic_square[i][j] = 0;
		}
	}

	create_magic_square(length, magic_square);

	print_magic_square(length, magic_square);
}

void create_magic_square(int n, int magic_square[n][n]){
	int row = 0, column = n / 2;

	for(int i = 1; i<=n*n; i++){
		if(column == n && row < 0){
			row += 2;
			column--;
		}

		if(column == n){
			column = 0;
		}

		if(row < 0){
			row = n - 1;
		}

		if(magic_square[row][column] != 0){
			row += 2;
			column--;
		}

		magic_square[row][column] = i;

		column++;
		row--;
	}	
}

void print_magic_square(int n, int magic_square[n][n]){
	for(int i = 0; i < n; i++){
		for(int j = 0; j<n; j++){
			printf("%4d", magic_square[i][j]);
		}
		printf("\n");
	}
}


