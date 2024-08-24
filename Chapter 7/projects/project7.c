#include <stdio.h>

int main(){
	int n1, d1, n2, d2, n3, d3;
	char operator;

	printf("Write two fractions (+, -, *, /): ");
	scanf("%d/%d", &n1, &d1);

	operator = getchar();

	while(operator == ' '){
		operator = getchar();
	}

	scanf("%d/%d", &n2, &d2);

	if(operator == '+'){
		if(d1 == d2){
			n3 = n1 + n2;
			d3 = d2;
		}else{
			d3 = d2 * d1;
			n3 = ((d3 / d1) + n1) + ((d3 / d2) + n2);
		}
	}else if(operator == '-'){
		if(d1 == d2){
			n3 = n1 - n2;
			d3 = d2;
		}else{
			d3 = d2 * d1; 
			n3 = ((d3 / d1) + n1) - ((d3 / d2) + n2);
		}
	}else if(operator == '*'){
		n3 = n1 * n2;
		d3 = d1 * d2;
	}else{
		n3 = n1 * d2;
		d3 = n2 * d1;
	}

	printf("Resultado: %d/%d %c %d/%d = %d/%d", n1,d1, operator, n2, d2, n3, d3);
}

