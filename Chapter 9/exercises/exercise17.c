#include <stdio.h>

int fact(int n);

int main(){
	printf("%d", fact(5));
}

int fact(int n){
	int f = 1;

	for(int i = 2; i<=n; i++){
		f *= i;
	}

	return f;
}

