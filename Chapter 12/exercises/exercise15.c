#include <stdio.h>
#include <stdbool.h>

bool search(int arr[][24], int n, int temperature);

int main(){
	int temperatures[7][24] = {{25, 28, 31, 34, 32, 30, 31}};
	int counterHours = 0;

	for(int *p = &temperatures[0][0]; p<&temperatures[7-1][24-1]; p++){
		printf("%4d", *p);
		counterHours++;

		if(counterHours == 24){
			printf("\n");
			counterHours = 0;
		}
	}
}

bool search(int arr[][24], int n, int temperature){
	for(int *p = &arr[0][0]; p<&arr[n-1][24-1]; p++){
		if(*p == temperature){
			return true;
		}
	}

	return false;
}

