/*
Now solve the same problem using functions. Use the following prototypes:
	int computeHomeValue (int popularity, int size)
	void computeHomeValue (void) 
Notice that for part b, all printf/scanf should take place within the function.
*/
#include <stdio.h>
#include <math.h>


int computeHomeValue(void) {
	int homeValue0 ;
	int popularity;
	int size;
	printf ("Enter popularity: ");
	scanf ("%d" , &popularity);
	printf ("Enter size: ");
	scanf ("%d" , &size);
	homeValue0 = (pow(popularity,3) + pow(size,2) ) * 10000;
	return homeValue0;
}
	


int main( void ) {
	int homeValue;
	homeValue = computeHomeValue();
	printf ("Home value is: %d", homeValue);
}

