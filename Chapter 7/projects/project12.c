#include <stdio.h>

int main(){
	float result = 0;
	char c, sign;
	printf("Enter an expression: ");
	
	while(c = getchar(), c != '\n'){
		if (result == 0){
			result = c - 48;
			continue;
		}
		
		if(c == '+' || c == '-' || c == '*' || c == '/'){
			sign = c;
			continue;
		}

		if(c == '.'){
			sign = '+';
			continue;
		}


		if(sign == '+'){
			result += (c-48);
		}else if(sign == '-'){
			result -= (c-48);
		}else if(sign == '*'){
			result *= (c-48);
		}else{
			result /= (c-48);
		}
	}

	printf("%d", result);
}

