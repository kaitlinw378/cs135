//Author: Kaitlin White
//Date: 9/23/2020
//Converting between imperial and metric using functions, expressions and selection

#include <stdio.h>

double convertFtToMeter(int feet, int inch){

	int totalInches;
	double meters, meterConvert; 

	totalInches = (feet * 12) + inch; 
	meterConvert = 39.37; 

	meters = (totalInches / meterConvert); 
	
	return meters;
}

double calcAreaMeters(double sideOne, double sideTwo){
	
	double area = (sideOne * sideTwo); 		

	return area;
}

int main(){
	
	int ftOne, inOne, ftTwo, inTwo; 
	double totalMetersOne, totalMetersTwo, length, width, totalArea;
	
	printf("Please enter your first side in feet inches, FT IN: "); 
	scanf("%d %d", &ftOne, &inOne); 

	printf("Please enter your second side in feet inches, FT IN: ");
	scanf("%d %d", &ftTwo, &inTwo);

	totalMetersOne = convertFtToMeter(ftOne, inOne);
	totalMetersTwo = convertFtToMeter(ftTwo, inTwo); 

	if(totalMetersOne > totalMetersTwo){
		length = totalMetersOne;
		width = totalMetersTwo;

		printf("\nLength in meters: %.3lf\n", length); 
		printf("Width in meters: %.3lf\n", width);				
	}
	else if(totalMetersTwo > totalMetersOne){
		length = totalMetersTwo; 
		width = totalMetersOne;

		printf("\nWidth in meters: %.3lf\n", width);
		printf("Length in meters: %.3lf\n", length); 		
	}
	else{
		length = totalMetersOne;
		width = totalMetersTwo;

		printf("\nWidth in meters: %.3lf\n", width);
		printf("Length in meters: %.3lf\n", length); 
	}

	totalArea = calcAreaMeters(length, width);
		
	printf("Area in square meters: %.3lf\n", totalArea);

	return 0;	
}

