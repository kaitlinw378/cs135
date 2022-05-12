//Author: Kaitlin White
//Date: 11/16/2020
//Lab 10 - arrays

#include<stdio.h> 

double calcAverage(int nums[], int numElements);

int main(){
	double average;
	int numbers[5], num = 5, counter = 0;
	
	do{
		printf("Enter a number: ");
		scanf("%d", &numbers[counter]);
		counter++;
	}while(counter<num);	

	average = calcAverage(numbers, num);
	printf("Average: %.2lf\n", average);
	return 0;
}

double calcAverage(int nums[], int numElements){

	double avg, sum = 0;
	for(int i = 0; i < numElements; i++){
		sum += nums[i];
	}
	avg = sum / numElements;
	return avg;

}
