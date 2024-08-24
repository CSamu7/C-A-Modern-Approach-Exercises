#include <stdio.h>

int main(){
	int n1, n2, remainder;

	printf("Enter two integers: ");
	scanf("%d %d", &n1, &n2);

	while(n1 != 0 && n2 != 0){	
		if (n2 > n1){
			remainder = n2 % n1;
			n2 = n1;
			n1 = remainder;
		}else{
			remainder = n1 % n2;
			n1 = n2;
			n2 = remainder;
		}
	}

	if(n1 == 0) {
		printf("MCD: %d", n2);
	}else{
		printf("MCD: %d", n1);
	}


}

