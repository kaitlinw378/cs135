//Author: Kaitlin White
//Date: 11/19/2020
//using strings and passing strings to functions to determine if words are palindromes

#include<stdio.h>
#include<stdbool.h>

#define STR_LENGTH 50

bool isPalindrome(char array[]);
bool isSameString(char arrayOne[], char arrayTwo[]);
void reverseCopy(char source[], char dest[]);
int stringLength(char array[]);

int main(){
	int lengthOne, lengthTwo;
	char firstWord[STR_LENGTH+1], secondWord[STR_LENGTH+1];	
	bool sameCheck;
	
	printf("Enter your first word: ");
	scanf("%s", firstWord);
	printf("Enter your second word: ");
	scanf("%s", secondWord); 
	
	sameCheck = isSameString(firstWord, secondWord);

	if(sameCheck){
		printf("You entered the same words!\n");
		
		if(isPalindrome(firstWord)){
			printf("'%s' is a palindrome!\n", firstWord);
		}
		else{
			printf("'%s' is not palindrome.\n", firstWord);
		}
	}
	else{
		if(isPalindrome(firstWord)){
			printf("'%s' is a palindrome!\n", firstWord);
		}
		else{
			printf("'%s' is not palindrome.\n", firstWord);
		}
		if(isPalindrome(secondWord)){
			printf("'%s' is a palindrome!\n", secondWord); 
		}
		else{
			printf("'%s' is not palindrome.\n", secondWord);
		}
	}
	return 0;
}

bool isPalindrome(char array[]){

	char reverse[STR_LENGTH+1];
	reverseCopy(array, reverse);
	if(isSameString(array, reverse)){
		return 1;
	}
	return 0;
}

bool isSameString(char arrayOne[], char arrayTwo[]){
	
	int strLengthOne = stringLength(arrayOne), strLengthTwo = stringLength(arrayTwo);
	if(strLengthOne == strLengthTwo){
		for(int i = 0; arrayOne[i] != '\0'; i++){
			if(arrayOne[i] == arrayTwo[i]){
				return 1;
			}
			else{
				return 0;
			}
		}
	}
	else{
		return 0;
		}
}	

void reverseCopy(char source[], char dest[]){

	int strLength = stringLength(source);
	int i;
	for(i=0; source[i] != '\0'; i++){
		dest[strLength-1] = source[i];
		strLength--;
	}
	dest[i] = '\0';
}

int stringLength(char array[]){

	int length = 0;
	for(int i=0; array[i] != '\0'; i++){
		length++;
	}
	return length;
}


