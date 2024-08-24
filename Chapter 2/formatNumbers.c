#include <stdio.h>

int main(void){
	int i;
	float x;

	i = 405;
	x = 839.2123f;

	printf("|%d|%4d|%-4d|%.2d|\n", i, i, i,i );
	printf("|%10.6f|%10.1e|%-10g|\n", x, x, x);
}
