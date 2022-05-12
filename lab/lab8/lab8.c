//Author: Kaitlin White
//Date: 10/26/2020
// Lab 8 - Using File IO to read weather data 

#include <stdio.h> 

#define FILE_NAME "wind.txt"

int main(){

	FILE *fp;
	double temp, speed; 
	char direction;
	
	fp = fopen(FILE_NAME, "r");
	
	if (fp == NULL){
		printf("Sorry, could not open file for reading");
	}
	else{
		fscanf(fp, "%c %lf %lf", &direction, &speed, &temp);
		printf("Temperature: %.2lf\nSpeed: %.2lf\nDirection: %c\n", temp, speed, direction);
		fclose(fp);
	}
	return 0;
}
