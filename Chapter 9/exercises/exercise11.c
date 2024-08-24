#include <ctype.h>
#include <stdio.h>

float compute_GPA(char grades[], int n);

int main(void){
	printf("%f", compute_GPA((char[]) {'a', 'c', 'd'}, 3));

	return 0;
}

float compute_GPA(char grades[], int n){
	float average = 0;

	for(int i = 0; i < n; i++){
		switch(toupper(grades[i])){
			case 'A': 
				average += 4;
				break;
			case 'B':
				average += 3;
				break;
			case 'C':
				average += 2;
				break;
			case 'D':
				average += 1;
				break;
			default:
				break;
		}
	}

	return average / n;
}


