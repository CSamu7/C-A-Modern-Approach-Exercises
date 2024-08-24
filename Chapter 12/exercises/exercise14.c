#include <stdio.h>
#include <stdbool.h>

bool search(int arr[][24], int n, int temperature);

int main(){
	int temperatures[7][24] = {{25, 28, 31, 34, 32, 30, 31}};

	printf("%d", search(temperatures, 7, 27));
}

bool search(int arr[][24], int n, int temperature){
	for(int *p = &arr[0][0]; p<&arr[n][24]; p++){
		if(*p == temperature){
			return true;
		}
	}

	return false;
}

