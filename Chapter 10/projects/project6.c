#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#define STACK_TOP 20

bool isFull();
bool isEmpty();
char pop(char stack[STACK_TOP]);
void push(char stack[STACK_TOP], char c);
void stack_overflow(void);
void stack_underflow(void);
int top = 0;


int main(){
	char c, stack[STACK_TOP] = {0};			

		printf("Enter an RPN expression: ");

		while(c = getchar(), c != '=' && c != 'q'){
			if(c == ' ') continue;

			if(c == '+' || c == '-' || c == '*' || c == '/'){
				char number1 = pop(stack);
				char number2 = pop(stack);

				int numberX = number1 - '0';
				int numberY = number2 - '0';

				switch(c){
					case '+':
						push(stack, (numberY + numberX) + '0');
						break;
					case '-':
						push(stack, (numberY - numberX) + '0');
						break;
					case '*':
						push(stack, (numberY * numberX) +	'0');
						break;
					case '/':
						push(stack, (numberY / numberX) +	'0');
						break;
				}
			}else{
				push(stack, c);
			}
		}

		char result = pop(stack);

		printf("Value: %d", result - '0');
}

bool isEmpty(){
	return top <= 0;
}

bool isFull(){
	return top > STACK_TOP;
}

char pop(char stack[STACK_TOP]){
	if(isEmpty()){
		stack_underflow();
	}else{
		return stack[--top];
	}
}

void push(char stack[STACK_TOP], char item){
	if(isFull()){
		stack_overflow();
	}else{
		stack[top++] = item;
	}
}


void stack_overflow(void){
	printf("Expression is too complex");
	exit(1);
}

void stack_underflow(void){
	printf("Not enough operands in expression");
	exit(1);
}

