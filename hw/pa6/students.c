//Author: Kaitlin White
//Date: 10/22/2020
//Using File IO to read and write student information to a file

#include <stdio.h> 

#define FILE_NAME "students.txt"

int getMenuChoice();
void displayStudent(FILE *f);
void saveStudent(FILE *f);

int main(){
	FILE *f;
	int choice = getMenuChoice();
	
	switch(choice){
		case 0:
			break;
		case 1:
			f = fopen("students.txt", "r");
			if (f == NULL){
				printf("Can't open file\n");
			}
			else{
				displayStudent(f);
				fclose(f);
			}
			break;
		case 2:
			f = fopen("students.txt", "w");
			if (f == NULL){
				printf("Can't open file\n");
			}
			else{
				saveStudent(f);
				fclose(f);
			}
			break;
		case 4:
			printf("Please enter a valid option!\n");
			break;
	}
	
	return 0;
}

int getMenuChoice(){
	int menuChoice;
	printf("***STUDENT SYSTEM***\n");
	printf("1. Display Student\n2. Savd Students\n0. EXIT\nEnter your choice: ");
	scanf("%d", &menuChoice);
	return menuChoice;
}

void displayStudent(FILE *f){
	int num;
	char standing;
	double gpa;
	fscanf(f,"%d %c %lf", &num, &standing, &gpa);
	printf("\nStudent Number: %d\nStudent Standing: %c\nStudent GPA: %.2lf\n", num, standing, gpa);
}

void saveStudent(FILE *f){
	int num;
	char standing;
	double gpa;
	printf("Enter a student number: ");
	scanf("%d", &num);
	printf("Enter the student's standing: ");
	scanf(" %c", &standing);
	printf("Enter a GPA: ");
	scanf("%lf", &gpa);
	fprintf(f,"%d  %c %lf\n", num, standing, gpa);
}
