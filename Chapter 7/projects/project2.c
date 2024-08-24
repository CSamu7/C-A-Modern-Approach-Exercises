#include <stdio.h>

int main(){
	int n;

	printf("n: ");
	scanf("%d", &n);
	getchar();

	for(long i = 1; i<=n; i++){
		if(i % 24 == 0){
			printf("Press Enter to continue... ");
			char c = getchar();

			while(getchar() != '\n');
		}

		printf("%10li %10li\n", i, i*i);
	}

	//short = 
	//int = 46340
}

