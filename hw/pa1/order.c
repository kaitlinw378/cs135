//Author: Kaitlin White
//Date: 9/9/2020
//This program simulates taking orders at a restaurant using variables, printf, and scanf

#include <stdio.h> 

int main(){
	printf("Welcome to McKeith's!\n");
	printf("May I take your order?\n");
	printf("Combo#s: 1-10 | Sizes: S M L\n"); 
	printf("\n"); 

	int orderOneNum, orderTwoNum, orderThreeNum, orderFourNum; 
	char orderOneSize, orderTwoSize, orderThreeSize, orderFourSize; 
	double orderOnePrice, orderTwoPrice, orderThreePrice, orderFourPrice; 
	
	printf("Order 1 (combo# size price): ");
	scanf("%d %c %lf", &orderOneNum, &orderOneSize, &orderOnePrice); 
	
	printf("Order 2 (combo# size price): ");
	scanf("%d %c %lf", &orderTwoNum, &orderTwoSize, &orderTwoPrice); 

	printf("Order 3 (combo# size price): "); 
	scanf("%d %c %lf", &orderThreeNum, &orderThreeSize, &orderThreePrice); 

	printf("Order 4 (combo# size price): "); 
	scanf("%d %c %lf", &orderFourNum, &orderFourSize, &orderFourPrice); 
	
	printf("\n  YOUR ORDER:\n");
	printf("===================================================\n"); 
	printf("||Combo Size   |   Combo Number   |   Combo Price||\n");
	printf("===================================================\n");
	printf("||%6c       |        %-10.1d|    %-10.2lf||\n", orderOneSize, orderOneNum, orderOnePrice);
	printf("||-------------|------------------|--------------||\n");
	printf("||%6c       |        %-10.1d|    %-10.2lf||\n", orderTwoSize, orderTwoNum, orderTwoPrice); 
	printf("||-------------|------------------|--------------||\n");
	printf("||%6c       |        %-10.1d|    %-10.2lf||\n", orderThreeSize, orderThreeNum, orderThreePrice); 
	printf("||-------------|------------------|--------------||\n");
	printf("||%6c       |        %-10.1d|    %-10.2lf||\n", orderFourSize, orderFourNum, orderFourPrice); 
	printf("===================================================\n");

	return 0; 
}
