//Author: Kaitlin White
//Date: 9/14/2020
//Lab 2: Calculating perimeters of shapes using variables and expressions

#include <stdio.h> 

int main(){

	int tLengthOne, tLengthTwo, tLengthThree, tPerim; 
	printf("Please enter your triangle sides\n"); 
	scanf("%d%d%d", &tLengthOne, &tLengthTwo, &tLengthThree); 
	tPerim = tLengthOne + tLengthTwo + tLengthThree; 
	printf("Your triangle perimeter: %d\n", tPerim); 	

	int rLengthOne, rLengthTwo, rPerim; 
	printf("Please enter your rectangle length & width\n");
	scanf("%d%d", &rLengthOne, &rLengthTwo);
	rPerim = (rLengthOne * 2) + (rLengthTwo * 2);
	printf("Your rectangle perimeter: %d\n", rPerim);
	
	int cRadiusLength; 
	double pi = 3.1415, cCirc; 
	printf("Please enter your circle radius\n"); 
	scanf("%d", &cRadiusLength); 
	cCirc = (pi * 2 * cRadiusLength); 
	printf("Your circle perimeter: %lf\n", cCirc);	
	
	return 0; 
}
