//Author: Kaitlin White
//Date: 9/17/2020 
//Using arithmetic expressions and selection to compare two orders of pizza

#include <stdio.h> 

int main(){

	int numPizzaFirst, numPizzaSecond, sizePizzaFirst, sizePizzaSecond;	
	double priceOrderOne, priceOrderTwo; 

	printf("First Pizza Order\n");
	printf("How many pizzas are you considering first? ");
	scanf("%d", &numPizzaFirst); 
	printf("What size are they, in inches? ");
	scanf("%d", &sizePizzaFirst); 
	printf("How much does each pizza cost? ");
	scanf("%lf", &priceOrderOne); 
	
	printf("Second Pizza Order\n"); 
	printf("How many pizzas are you considering second? "); 
	scanf("%d", &numPizzaSecond); 
	printf("What size are they, in inches? "); 
	scanf("%d", &sizePizzaSecond); 
	printf("How much does each pizza cost? "); 
	scanf("%lf", &priceOrderTwo); 
	printf("\n");	

	double pi = 3.14; 
	double areaPerPizzaOne = ((sizePizzaFirst / 2) * (sizePizzaFirst / 2)) * pi;
	double totalAreaOrderOne = areaPerPizzaOne * numPizzaFirst; 
	double totalPriceOrderOne = priceOrderOne * numPizzaFirst; 
	double ppiOrderOne = (totalPriceOrderOne / totalAreaOrderOne); 

	double areaPerPizzaTwo = ((sizePizzaSecond / 2) * (sizePizzaSecond / 2)) * pi;
	double totalAreaOrderTwo = areaPerPizzaTwo * numPizzaSecond; 
	double totalPriceOrderTwo = priceOrderTwo * numPizzaSecond; 
	double ppiOrderTwo = (totalPriceOrderTwo / totalAreaOrderTwo); 

	if((totalAreaOrderOne > totalAreaOrderTwo) && (ppiOrderOne < ppiOrderTwo)){
		printf("Your best choice is %d %d-inch pizzas.\n", numPizzaFirst, sizePizzaFirst); 
	}
	else if((totalAreaOrderTwo > totalAreaOrderOne) && (ppiOrderTwo < ppiOrderOne)){
		printf("Your best choice is %d %d-inch pizzas.\n", numPizzaSecond, sizePizzaSecond);
	}
	else if((totalAreaOrderOne < totalAreaOrderTwo) && (ppiOrderOne < ppiOrderTwo)){
		printf("If you just want more pizza, you should choose %d %d-inch pizzas.\n", numPizzaSecond, sizePizzaSecond); 
		printf("\n");
		printf("If you want more pizza for your dollar, you should choose %d %d-inch pizzas.\n", numPizzaFirst, sizePizzaFirst); 
	}
	else{
		printf("If you just want more pizza, you should choose %d %d-inch pizzas.\n", numPizzaFirst, sizePizzaFirst);
		printf("\n"); 
		printf("If you want more pizza for your dollar, you should choose %d %d-inch pizzas.\n", numPizzaSecond, sizePizzaSecond);
	}

	return 0;
}
