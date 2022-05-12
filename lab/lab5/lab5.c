//Midterm1: 
//Author: Erin Keith
//Date: 9/26/2020
//Purpose: calculations and comparisons

//Lab5 - debugging by Kaitlin White

#include <stdio.h>

double psiToKpa(int psi){
	return psi * 6.895;
}

double psiToBar(int psi){
	return psi / 14.504;
}

int main(){
	int psi;
	char conversion;
	double result;

	printf("Please enter the number of psi: ");
	scanf("%d", &psi);

	printf("Please enter the conversion you'd like to make.\n");
	printf("'K' for kPa\n'B' for Bar\n");
	scanf("\n%c", &conversion);

	if(conversion == 'K'){
		result = psiToKpa(psi);
		printf("%d PSI to %.4lf kPa.\n", psi, result);
	}
	else if(conversion == 'B'){
		result = psiToBar(psi);
		printf("%d PSI to %.4lf Bar.\n", psi, result);
	}
	else{
		printf("Invalid conversion choice.\n");
	}

	return 0;
}
