#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define LIMIT 20

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char stack[], char ch);
char pop(char stack[]);
void stack_overflow(void);
void stack_underflow(void);

int top = 0;

int main(void){
	printf("Enter parentheses and/or braces: ");

	char stack[LIMIT], c;
	int value = 0;
	
	while(c = getchar(), c != '\n'){
		char brace = ' ';

		switch(c){
			case '(': case '{': case '[': 
				push(stack, c);
				break;
			case ')': case '}': case ']':
				brace = pop(stack);
				break;
			default:
				printf("This is not a brace!!");
				exit(1);
				break;
		}

		if(c == ')' && brace != '('){
			printf("Parentheses/braces aren't nested properly");
			exit(1);
		}else if(c == '}' && brace != '{'){
			printf("Parentheses/braces aren't nested properly");
			exit(1);
		}else if(c == ']' && brace != '['){	
			printf("Parentheses/braces aren't nested properly");
			exit(1);
		}
	}

	if(is_empty()){
		printf("Parentheses/braces are nested properly");
	}else{
		printf("Parentheses/braces aren't nested properly");
	}
}

void make_empty(void){
	top = 0;
}

bool is_empty(void){
	return top == 0;
}

bool is_full(void){
	return top == LIMIT;
}

void stack_overflow(void){
 	printf("Stack Overflow");
	exit(1);
}

void stack_underflow(void){
	printf("Parentheses/braces aren't nested properly");
	exit(1);
}

void push(char stack[LIMIT], char ch){
	if(LIMIT == top){
		stack_overflow();
	}else{
		stack[top++] = ch;
	}
}

char pop(char stack[LIMIT]){
	if(top == 0){
		stack_underflow();
	}else{
		return stack[--top];
	}
}


