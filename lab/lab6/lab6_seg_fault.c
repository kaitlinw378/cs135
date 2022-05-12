//Lab 6: Pointers and Seg Faults
//Author: Erin Keith
//Date: 7/13/20
//Fix it

//Segmentation fault error fix - Kaitlin White

#include <stdio.h>

int main(){
	int aValue, *aPointer;

	// add one line of code right here to 
	// fix the Segmantation fault (core dumped) error

	aPointer = &aValue;	

	*aPointer = 10;

	return 0;
}
