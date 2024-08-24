bool is_empty(int stack[]);
bool is_full(int stack[]);
void make_empty(int stack[]);

#define N 10

int *top_ptr;

int main(){
	int stack[N];
}

bool is_empty(int stack[]){
	return top == stack;
}

bool is_full(int stack[]){
	return top == &stack[N-1]
}

void make_empty(int stack[]){
	top = stack;
}



