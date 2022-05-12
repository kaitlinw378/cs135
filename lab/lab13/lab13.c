//Author: Kaitlin White
//Date: 12/7/2020
//Lab 13 - command line arguments 

#include <stdio.h>
#define NUMCOMMANDS 3

int main(int argc, char *argv[]){

	if(argc < NUMCOMMANDS){
		printf("Correct usage:\n");
		printf("%s inFile outFile\n", argv[0]);
		return 0;
	}
	
	for(int i = 1; i < argc; i++){
		FILE *fp = fopen(argv[i], "r");
		if(fp == NULL){
			printf("Sorry, could not open %s for reading\n", argv[i]);
		}
		else{
			return 0;
		}
	}
}
