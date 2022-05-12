//Author: Kaitlin White
//Date: 11/30/2020
//Lab 12- 2D Arrays

#include<stdio.h>

#define N 13

void computeRedheffer(int rows, int cols, int arr[][N]);
void displayMatrix(int rows, int cols, int arr[][N]);

int main(){
	int row, col, redhefferMatrix[N][N];	
	
	computeRedheffer(row, col, redhefferMatrix);
	displayMatrix(row, col, redhefferMatrix);

	return 0;
}

void computeRedheffer(int rows, int cols, int arr[][N]){

	for(rows = 1; rows < N; rows++){
		for(cols = 1; cols < N; cols++){
			if(cols == 1){
				arr[rows][cols] = 1;	
			}		
			else if(cols % rows == 0){
				arr[rows][cols] = 1;
			}
			else{
				arr[rows][cols] = 0; 
			}
		}
	}
}

void displayMatrix(int rows, int cols, int arr[][N]){

	for(rows = 1; rows < N; rows++){
		for(cols = 1; cols < N; cols++){
			if(cols != N-1){
				printf("%-3d", arr[rows][cols]);
			}
			else{
				printf("%d\n", arr[rows][cols]);
			}
		}
	
	}
}
