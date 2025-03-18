/*
Now solve the same problem using functions. Use the following prototypes:
	int computeHomeValue (int popularity, int size)
	void computeHomeValue (void) 
Notice that for part b, all printf/scanf should take place within the function.
*/
#include <stdio.h>
#include <math.h>


void computeHomeValue(void) {
	int homeValue ;
	int popularity;
	int size;
	
	printf ("Enter popularity: ");
	scanf ("%d" , &popularity);
	printf ("Enter size: ");
	scanf ("%d" , &size);
	homeValue = (pow(popularity,3) + pow(size,2) ) * 10000;
	printf ("Home value is: %d", homeValue);
}
	


int main( void ) {
	computeHomeValue();
}

