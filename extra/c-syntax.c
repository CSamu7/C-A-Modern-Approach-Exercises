#include <stdio.h>

int function1 (int x, int y) /*Prototipo*/

int main(){
	/*Comentario*
	*/
	int x;
	int a,b,c,d;
	char letter;
	float the_float;

	printf("Enter a number: ");
	scanf("%d", &x);	
	printf("Number %d \n", x);
	printf("%d", 2==1);

	if(x == 20) {
		printf("20 20 20 20 \n");	
	} else{
		printf("I am Alive");
		getchar();
	}

	for(int i = 0; i<10; i++){
		printf("%d\n", i);
	}

	while(x < 20){
		printf("%d\n", x);
		x++;
	}


	return 0;
}

int function1 (int x, int ty){
	return x*y;
}

