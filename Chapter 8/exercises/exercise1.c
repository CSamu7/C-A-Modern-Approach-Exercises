#include <stdio.h>

int main(){
	int a[3] = {1,2,3};

	printf("%ld\n",sizeof(a) / sizeof(a[0]));
	printf("%ld\n",sizeof(a) / sizeof(int));

	//Porque ya obtenemos el tipo directamente del array, con el segundo metodo tendriamos que modificar el programa mas veces.
}

