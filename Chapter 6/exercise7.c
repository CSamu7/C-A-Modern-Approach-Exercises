#include <stdio.h>

int main(){
	int n, square = 1, odd = 3;
	printf("This program prints a table of squares \n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);

	for(int i = 1; i <= n; ++i, odd +=2){
		printf("%d: %d\n", i, square);	
		square += odd;
	}
}

