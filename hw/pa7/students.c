//Author: Kaitlin White
//Date: 10/29/2020
//Using FILE IO, loops and pass by address to analyze student grade data

#include<stdio.h>

#define FILE_NAME "students.txt"

int getMenuChoice();
void calcStats(FILE *fp, double* avgGPA, double* maxGPA, double* minGPA);
void saveStudents(FILE *fp);

int main(){
	FILE *fp;
	int choice;
	double avgGPA, maxGPA, minGPA;
	do{
	choice = getMenuChoice();
		switch(choice){
			case 0:
				break;
			case 1:
				fp = fopen("students.txt", "r");
				if(fp == NULL){
					printf("Can't open file\n");
				}
				else{
					calcStats(fp, &avgGPA, &maxGPA, &minGPA);
					fclose(fp);
				}
				break;
			case 2:
				fp = fopen("students.txt", "a");
				if(fp == NULL){
					printf("Can't open file\n");
				}
				else{
					saveStudents(fp);
					fclose(fp);
				}
				break;
			default:
				printf("Please enter a valid option!\n");
				break;
		}
	}while(choice != 0);
	return 0;
}

int getMenuChoice(){
	int menuChoice; 
	printf("***STUDENT SYSTEM***\n");
	printf("1. Analyze Data\n2. Save Students\n0. EXIT\nEnter your choice: ");
	scanf("%d", &menuChoice);
	return menuChoice;
}

void calcStats(FILE *fp, double* avgGPA, double* maxGPA, double* minGPA){
	int counter = 0, studentNum; 
	double total, gpa;
	*minGPA = 100000;
	while(fscanf(fp, "%d, %lf", &studentNum, &gpa) >= 1){
		total+=gpa; 
		if(*maxGPA < gpa){
			*maxGPA = gpa;
		}
		else{
			*maxGPA = *maxGPA;
		}
		if(*minGPA > gpa){
			*minGPA = gpa;
		}
		else{
			*minGPA = *minGPA;
		}
		counter++;
	}
	*avgGPA = total/counter;
	printf("Average GPA: %.2lf\n", *avgGPA);
	printf("Minimum GPA: %.2lf\n", *minGPA);
	printf("Mazimum GPA: %.2lf\n", *maxGPA);
}

void saveStudents(FILE *fp){
	int numStudents, idNum, counter = 0;
	double gpa;
	printf("How many students are you adding? ");
	scanf("%d", &numStudents);
	do{
		printf("Enter a student number: ");
		scanf("%d", &idNum);
		printf("Enter a GPA: ");
		scanf("%lf", &gpa);
		fprintf(fp, "%d, %.4lf\n", idNum, gpa);
		counter++;
	}while(counter < numStudents);
}
