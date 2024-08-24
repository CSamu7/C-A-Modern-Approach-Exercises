#include <stdio.h>

int main(){
	int gs1Prefix, groupIdentifier, publisherCode, itemNumber, checkDigit;

	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &gs1Prefix, &groupIdentifier, &publisherCode, &itemNumber, &checkDigit);

	printf("GS1 prefix: %d \n", gs1Prefix);
	printf("Group Identifier: %d \n", groupIdentifier);
	printf("Publisher code: %d \n", publisherCode);
	printf("Item number: %d \n", itemNumber);
	printf("Check Digit: %d \n", checkDigit);
}
