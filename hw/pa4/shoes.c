//Author: Kaitlin White
//Date: 10/8/2020
//Using pointers to see if shoes are in budget

#include <stdio.h>

int main(){
	
	int budget; 
	int *budgetptr = &budget;

	double salesTax = 0.0826, price, taxPrice, total, remainder;
	double *salesTptr = &salesTax, *priceptr = &price, *taxPptr = &taxPrice, *totalptr = &total, *remainptr = &remainder;
	
	printf("What is your budget? ");
	scanf("%d", budgetptr); 
	printf("What is the price of the shoes you want? ");
	scanf("%lf", priceptr); 

	*taxPptr = *salesTptr * *priceptr; 
	*totalptr = *priceptr + *taxPptr; 
	*remainptr = *budgetptr - *totalptr;

	if(*totalptr > *budgetptr){
		printf("Sorry! $%.2lf for these shoes is out of your budget.\n", *totalptr);
	}
	else if(*totalptr == *budgetptr){
		printf("Congratulations! You can buy these shoes with $%.2lf to spare!\n", *remainptr);
	}
	else{
		printf("Congratulations! You can buy these shoes with $%.2lf to spare!\n", *remainptr);
	}	

	return 0;
}
