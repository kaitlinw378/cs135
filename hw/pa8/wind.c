//Author: Kaitlin White
//Date: 11/12/2020
//Using file IO, arrays, and passing arrays to functions to analyze wind data

#include<stdio.h>

#define FILE_NAME "wind.txt" 

#define SPEED_LENGTH 100
#define DIRECTION_LENGTH 100

int getMenuChoice();
int loadWindData(FILE *fp, double windSpeeds[], char windDirections[]);
void displayWindData(int numItems, double windSpeeds[], char windDirections[]);
void calcWindStats(int numItems, double windSpeeds[], char windDirections[], double* avgWinSpd, char* mostWind); 
int addWindData(FILE *fp, int numItems, double windSpeeds[], char windDirections[]);

int main(){
	FILE *fp;
	int choice, totalNums = 0; 
	double speed[SPEED_LENGTH];
	char mostDirection, direction[DIRECTION_LENGTH]; 
	double averageSpeed;
	
	do{
	choice = getMenuChoice();
		switch(choice){
			case 0:
				break;
			case 1: 
				fp = fopen("wind.txt", "r");
				if(fp == NULL){
					printf("Can't open file\n");
				}
				else{
					totalNums = loadWindData(fp, speed, direction); 
					fclose(fp);
				}
				break;
			case 2:
				displayWindData(totalNums, speed, direction);
				break;
			case 3: 
				calcWindStats(totalNums, speed, direction, &averageSpeed, &mostDirection);
				break;
			case 4: 
				fp = fopen("wind.txt", "a");
				if(fp == NULL){
					printf("Can't open file\n");
				}
				else{
					totalNums = loadWindData(fp, speed, direction);
					addWindData(fp, totalNums, speed, direction);
					fclose(fp);
				}
				break;
			default:
				printf("Please enter a valid option.\n");
				break;
		}
	}while(choice!=0);
	return 0;
}

int getMenuChoice(){
	int menuChoice; 
	printf("**WIND DATA**\n");
	printf("1. Load Wind Data\n2. Display Wind Data\n3. Analyze Wind Data\n4. Add Wind Data\n0. EXIT\nEnter your choice: ");
	scanf("%d", &menuChoice);
	return menuChoice;
}

int loadWindData(FILE *fp, double windSpeeds[], char windDirections[]){
	int speed = 0;
	while(fscanf(fp, "%lf %c", &windSpeeds[speed], &windDirections[speed]) == 2){
		speed++;
	}	
	return speed;
}

void displayWindData(int numItems, double windSpeeds[], char windDirections[]){

	printf("\n WIND DATA\n");
	printf("=================================================\n");
	printf("||Item #      |    Wind Speed    |  Direction  ||\n");
	printf("||=============================================||\n");
	for(int index = 0; index < numItems; index++){
		printf("||------------|------------------|-------------||\n");
		printf("||%9d   |%9.2lf         |%3c          ||\n", index+1, windSpeeds[index], windDirections[index]);
	}
	printf("||------------|------------------|-------------||\n");
	printf("=================================================\n");
}

void calcWindStats(int numItems, double windSpeeds[], char windDirections[], double* avgWinSpd, char* mostWind){

	double totalSpd = 0;
	int north = 0, south = 0, east = 0, west = 0;
	for(int index = 0; index < numItems; index++){
		totalSpd += windSpeeds[index];
		if(windDirections[index] == 'N'){
			north++;
		} 
		else if(windDirections[index] == 'S'){
			south++;
		}
		else if(windDirections[index] == 'E'){
			east++;
		}
		else if(windDirections[index] == 'W'){
			west++;
		}
		else{
			north += 0;
			south += 0;
			east += 0;
			west += 0;
		}	
	}
	*avgWinSpd = totalSpd / numItems; 
	if(north > south && north > east && north > west){
		*mostWind = 'N';
	}
	else if(south > north && south > east && south > west){
		*mostWind = 'S';
	}
	else if(east > north && east > south && east > west){
		*mostWind = 'E';
	}
	else{
		*mostWind = 'W';
	}
	printf("Wind averages %.2lf mph, mostly in the %c direction.\n", *avgWinSpd, *mostWind);
}

int addWindData(FILE *fp, int numItems, double windSpeeds[], char windDirections[]){
	int data, counter = 0;
	printf("How many data items would you like to add? ");
	scanf("%d", &data);
	do{
		printf("wind speed? ");
		scanf("%lf", &windSpeeds[numItems+1]);
		printf("wind direction? ");
		scanf(" %c", &windDirections[numItems+1]);
		counter++;
		fprintf(fp,"%.6lf %c\n", windSpeeds[numItems+1], windDirections[numItems+1]);
	}while(counter < data);
	return numItems;
}

