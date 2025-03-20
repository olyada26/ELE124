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

int main(void) {
	int number ;
	printf("Please Input: ");
	scanf("%d", &number);
	switch (number){
	case WATER_DEGREE :
		printf("The substance is water");
		break;
	case MERCURY_DEGREE :
		printf("The substance is mercury");
		break;
	case COPPER_DEGREE :
		printf("The substance is copper");
		break;
	case SILVER_DEGREE :
		printf("The substance is silver");
		break;
	case GOLD_DEGREE :
		printf("The substance is gold");
		break;
	default :
		printf("Substance is unknown") ;
}
	
	
	
	
	
	
}

