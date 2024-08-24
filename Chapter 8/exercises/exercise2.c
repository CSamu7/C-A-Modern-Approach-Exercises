#include <stdio.h>

int main(){
	char c = 48;

	int a[2] = {1,2};

	for(int i; i<2; i++){
		printf("%d", a[(c+i)-48]);
	}
}

