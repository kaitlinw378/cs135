//Author: Kaitlin White, Allison Abbott, Erik Sterdt
//Date: 11/23/2020
//lab 11 

#include <stdio.h>
#define MAX_STR_LEN 100
_Bool hasPunctuation(char stringArray[]);


int main(){

	char sentence[MAX_STR_LEN + 1];
	printf("Enter a sentence: ");
	fgets(sentence, MAX_STR_LEN, stdin);
	
	
	if (hasPunctuation(sentence)){
		printf("There is punctuation in your sentence.\n");
	}
	else {
		printf("No punctuation.\n");
	}
	


	return 0;
}


_Bool hasPunctuation(char stringArray[]){

	for(int i =0; stringArray[i] != '\0'; i++){
		if(stringArray[i] >= 33 && stringArray[i] <= 47){
			return 1;
		}
		else if(stringArray[i] >= 58 && stringArray[i] <= 64){
			return 1;
		}
		else if(stringArray[i] >= 91 && stringArray[i] <= 96){
			return 1;
		}
		else if(stringArray[i] >= 123 && stringArray[i] <= 126){
			return 1;
		}
	}
	return 0;

}
