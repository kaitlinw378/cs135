//Author: Kaitlin White
//Date: 10/19/2020
//lab 7 - Using pass by address to convert meters to feet and inches

#include <stdio.h> 

void metersToFeetInches(double m, int* ft, double* in);

int main(){
	int feet;
	double meters, inches;	

	printf("Please enter your meters: ");
	scanf("%lf", &meters);
	metersToFeetInches(meters, &feet, &inches);
	printf("%d feet %.3lf inches\n", feet, inches);

	return 0;
}

void metersToFeetInches(double m, int* ft, double* in){

	*ft = m * 3.281;
	*in =((m * 3.281) - *ft) * 12;
	
}
