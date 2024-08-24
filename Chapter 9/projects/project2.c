#include <stdio.h>

float tax_due(float income_tax);

int main(){
	printf("%f", tax_due(3534));
}

float tax_due(float income_tax){
	if(income_tax <= 750){
		return income_tax * .01;
	}else if(income_tax < 2250){
		return (income_tax * .02) + 7.50;
	}else if(income_tax < 3750){
		return (income_tax * .03) + 37.50;
	}else if(income_tax < 5250){
		return (income_tax * .04) + 82.50;
	}else if(income_tax < 7000){
		return (income_tax * .05) + 142.50;
	}else{
		return (income_tax * .06) + 230;
	}
}

