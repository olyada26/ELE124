/*
-write a program that pomots the user to input the boiling point in degree celsius.
-the program should output the substance corresponding to the boiling point listed in table.
-the program should output messafe "sustance unknown" when it does not match any substance.
water   => 100
mercury => 357
copper  => 1187
silver  => 2193
gold    => 2660
*/
#include <stdio.h>
#define WATER_DEGREE 100
#define MERCURY_DEGREE 357
#define COPPER_DEGREE 1187
#define SILVER_DEGREE 2193
#define GOLD_DEGREE 2660
#define MARGIN_OF_ERROR 5

int main(void) {
	int number ;
	printf("Please Input: ");
	scanf("%d", &number);
	if (abs(number-WATER_DEGREE) <= MARGIN_OF_ERROR ){
		printf("The substance is water");
	}else if (abs(number-MERCURY_DEGREE) <= MARGIN_OF_ERROR){
		printf("The substance is mercury");
	}else if (abs(number-COPPER_DEGREE) <= MARGIN_OF_ERROR){
		printf("The substance is copper");
	}else if (abs(number-SILVER_DEGREE) <= MARGIN_OF_ERROR){
		printf("The substance is silver");
	}else if (abs(number-GOLD_DEGREE) <= MARGIN_OF_ERROR){
		printf("The substance is gold");
	}else {
		printf("Substance is unknown");
	}
	
}

