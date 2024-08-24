#include <stdio.h>

#define LENGTH sizeof(a) / sizeof(a[0])

int main(){
	int a[10];

	printf("Enter %ld numbers: ", LENGTH);
	for(int i = 0; i<LENGTH; i++){
		scanf("%d", &a[i]);
	}

	printf("In reverse order: ");
	for(int i = LENGTH -1; i >= 0; i--){
		printf(" %d", a[i]);
	}
	printf("\n");
}

