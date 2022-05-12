//Author: Erin Keith
//Date: 9/9/2020
//Lab 2: Expressions
//calculate triangle perimeter demo

#include <stdio.h>

int main(){
	//Triangle
	//"the program must create variables for saving"
	//"the shape measurements and the perimeter values"
	int tSide1, tSide2, tSide3, tPerimeter;

	//"It should then prompt the user"
	printf("Please enter your triangle sides\n");
	//"and get the shape measurements from the keyboard"
	scanf("%d%d%d", &tSide1, &tSide2, &tSide3);
	//"It should then use those values to calculate the perimeter"
	tPerimeter = tSide1 + tSide2 + tSide3;
	//"Finally, it should display those perimeters to the screen"
	printf("Your triangle perimeter: %d\n", tPerimeter);


	//Now do the Rectable and Circle
	return 0;
}