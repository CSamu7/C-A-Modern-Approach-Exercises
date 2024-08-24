#include <stdio.h>

int main(){
	int n1, n2, n3, n4, smallNumber, largeNumber, tmpS, tmpL, oTmpS, oTmpL;

	printf("Enter four integers: ");
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

	if (n1 > n2){
		tmpS = n2;
		tmpL = n1;
	}else{
		tmpS = n1;
		tmpL = n2;
	}
		
	if(n3 > n4){
		oTmpS = n4;
		oTmpL = n3;
	}else{
		oTmpS = n3;
		oTmpL = n4;
	}

	if(tmpL > oTmpL){
		largeNumber = tmpL;
	}else {
		largeNumber = oTmpL;
	}
					
	if(tmpS > oTmpS){
		smallNumber = oTmpS;
	}else{
		smallNumber = tmpS;
	}

	printf("Largest: %d\n", largeNumber);
	printf("Smallest: %d\n", smallNumber);
}

