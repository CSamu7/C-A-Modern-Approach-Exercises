#include <stdio.h>

int digit(int n, int k);

int main(){
	printf("%d", digit(8342, 2));
}

int digit(int n, int k){
	if(k > n) return 0;
				
	for(int i = 1; i<k; i++){
		n /= 10;
	}

	return n % 10;
}

