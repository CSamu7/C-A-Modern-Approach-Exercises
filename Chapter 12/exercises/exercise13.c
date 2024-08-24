#include <stdio.h>

#define ROWS 10
#define COLUMNS 10

int main(){
	int matrix[ROWS][COLUMNS];
	int counterZero = ROWS;

	for(int *p = &matrix[0][0]; p < &matrix[ROWS-1][COLUMNS]; p++){
		if(counterZero == ROWS){
			*p = 1;
			counterZero = 0;
		}else{
			*p = 0;
			counterZero++;
		}
	}
}

