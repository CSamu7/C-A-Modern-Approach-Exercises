#include <stdio.h>

int check(int x, int y, int n);

int main(){
	printf("%d", check(3, 4, 6));
	printf("%d", check(3, 4, 2));

	return 0;
}

int check(int x, int y, int n){
	if((x > 0 && x <= n-1) && (y <= n-1 && y > 0)){
		return 1;
	}else{
		return 0;
	}
}

