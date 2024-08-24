#include <stdio.h>

int main(){
	int itemNumber, purchaseDay, purchaseMonth, purchaseYear;
	float unitPrice;

	printf("Enter item number: ");
	scanf("%d", &itemNumber);

	printf("Enter unit price: ");
	scanf("%f", &unitPrice);

	printf("Enter purchase date (dd/mm/yyyy): ");
	scanf("%d/%d/%d", &purchaseDay, &purchaseMonth, &purchaseYear);
	
	printf("Item\t Unit Price\t Purchase Date\n");
	printf("%d\t%f\t%d/%d/%d", itemNumber, unitPrice, purchaseDay, purchaseMonth, purchaseYear);
}

