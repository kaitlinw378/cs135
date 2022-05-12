//Author: Kaitlin White
//Date: 9/21/2020
//lab 3 - expressions and if/else statements

#include <stdio.h> 

int main(){

	double salesTax, price, taxPrice, total, remainder; 
	int budget; 
	
	printf("What is your budget? ");
	scanf("%d", &budget); 
	printf("What is the price of the shoes you want? ");
	scanf("%lf", &price); 
	
	salesTax = 0.0826;
	taxPrice = salesTax * price;
	total = price + taxPrice; 
	remainder = budget - total;
	
	if (total > budget){
		printf("Sorry! $%.2lf for these shoes is out of your budget.\n", total);
	}
	else if (total == budget){
		printf("Congratulations! You can buy these shoes with $%.2lf to spare!\n", remainder);
	}
	else{
		printf("Congratulations! You can buy these shoes with $%0.2lf to spare!\n", remainder);
	}

	return 0; 
}
