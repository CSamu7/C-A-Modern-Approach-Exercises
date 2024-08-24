#include <stdio.h>

int main(){
	int extension, first, second;

	printf("Enter phone number [{xxx} xxx-xxxx]: ");
	scanf("{%d} %d-%d", &extension, &first, &second);

	printf("%d.%d.%d", extension, first, second);	
}
