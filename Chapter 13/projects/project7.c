#include <stdio.h>

int main(){
	int n1, n2;

	char *about_ten[9] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
	char *ten_numbers[10] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
	char *second_names[10] = {"-one", "-two", "-three", "-four", "-five", "-six", "-seven", "-eight", "-nine"};
	
	printf("Enter a two-digit number: ");
	scanf("%1d%1d", &n1, &n2);

	int integer = (n1 * 10) + n2;

	if(integer >= 10 && integer < 20){
		printf("%s", ten_numbers[integer - 10]);
		return 0;
	}

	if(integer % 10 == 0){
		printf("%s", about_ten[(integer / 10) - 2]);
	}else{
		printf("%s%s", about_ten[(integer / 10) - 2], second_names[n2 - 1]);
	}
}

