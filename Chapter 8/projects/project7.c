#include <stdio.h>

int main(){
	int table[5][5], rowTotal, columnTotal = 0;

	for(int i = 0; i<5; i++){
		printf("Enter row %d: ", i+1);
		for(int j = 0; j<5; j++){
			scanf("%d", &table[i][j]);
		}
	}

	printf("Row totals: ");
	for(int i = 0; i<5; i++){
		rowTotal = 0;

		for(int j = 0; j<5; j++){
			rowTotal += table[i][j];
		}

		printf(" %2d ", rowTotal);
	}

	printf("\nColumn totals: ");
	for(int i = 0; i<5; i++){
		columnTotal = 0;

		for(int j = 0; j<5; j++){
			columnTotal += table[j][i];
		}

		printf(" %2d ", columnTotal);
	}
}

