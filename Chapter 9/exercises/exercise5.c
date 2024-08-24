#include <stdio.h>

int num_digits(int n);

int main(){
	printf("%d", num_digits(32));
	printf("%d", num_digits(293));
}

int num_digits(int n){
	int divisions = 0;

	while(1){
		if(n == 0){
			return divisions;
		}
		
		n /= 10;
		divisions++;
	}
}


