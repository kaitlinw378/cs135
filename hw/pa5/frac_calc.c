//Author: Kaitlin White
//Date: 8/16/20
//Using pointers, passing variables, and functions to create a fraction calculator

#include <stdio.h>

int getMenuChoice(); 
void getFraction(int* numerator, int* denominator);
void addFraction(int num1, int den1, int num2, int den2, int* num, int* den);
void subtractFraction(int num1, int den1, int num2, int den2, int* num, int* den);
void multiplyFraction(int num1, int den1, int num2, int den2, int* num, int* den);
void dividesFraction(int num1, int den1, int num2, int den2, int* num, int* den);

int main(){
		
	int choice = getMenuChoice(), numer1, denom1, numer2, denom2, num, den;
	
	switch(choice){
		case 1:
			getFraction(&numer1, &denom1);
			getFraction(&numer2, &denom2);
			addFraction(numer1, denom1, numer2, denom2, &num, &den);
			printf("*RESULT*\n%d/%d\n", num, den);
			break;
		case 2:
			getFraction(&numer1, &denom1);
			getFraction(&numer2, &denom2);
			subtractFraction(numer1, denom1, numer2, denom2, &num, &den);
			printf("*RESULT*\n%d/%d\n", num, den);
			break;
		case 3: 
			getFraction(&numer1, &denom1);
			getFraction(&numer2, &denom2);
			multiplyFraction(numer1, denom1, numer2, denom2, &num, &den);
			printf("*RESULT*\n%d/%d\n", num, den);
			break;
		case 4:
			getFraction(&numer1, &denom1);
			getFraction(&numer2, &denom2);
			dividesFraction(numer1, denom1, numer2, denom2, &num, &den);
			printf("*RESULT*\n%d/%d\n", num, den);
			break;
		case 5:
			break;
	}
	return 0;
}

int getMenuChoice(){	
	int menuChoice;	
	printf("***FRACTION CALCULATOR***\n");
	printf("1 - addition\n2- subtraction\n3 - multiplication\n4 - division\n");
	scanf("%d", &menuChoice);
	return menuChoice;
}

void getFraction(int* numerator, int*denominator){
	printf("Enter a fraction #/#\n");
	scanf("%d/%d", numerator, denominator);
}

void addFraction(int num1, int den1, int num2, int den2, int* num, int* den){
	if(den1 == den2){
		*num = num1 + num2;
		*den = den1;
	}
	else{
		*num = (num1 * den2) + (num2 * den1);
		*den = (den1 * den2);
	}
}

void subtractFraction(int num1, int den1, int num2, int den2, int* num, int* den){
	if(den1 == den2){
		*num = num1 - num2;
		*den = den1;
	}
	else{
		*num = (num1 * den2) - (num2 * den1);
		*den = (den1 * den2);
	}
}

void multiplyFraction(int num1, int den1, int num2, int den2, int* num, int* den){
	*num = num1 * num2;
	*den = den1 * den2;
}

void dividesFraction(int num1, int den1, int num2, int den2, int* num, int* den){
	*num = num1 * den2;
	*den = den1 * num2;
}

