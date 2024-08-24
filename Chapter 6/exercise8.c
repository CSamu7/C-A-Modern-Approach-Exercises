#include <stdio.h>

int main(){
	int nDays, startDay;

	printf("Enter number of days in month: ");
	scanf("%d", &nDays);

	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &startDay);

	int lastDay = 8 - startDay;

	for(int i = 1; i<startDay; i++){
		printf("\t");
	}

	for(int i = 1; i<=nDays; i++){
		printf("%d \t", i);			
		if(lastDay  == i){
			printf("\n");
			lastDay += 7;
		}

	}
}

