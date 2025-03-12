//4 uzerinden not ne, harf notu
#include <stdio.h>
#define FINALS_RATE 0.6 
#define MIDTERMS_RATE 0.4 
 int main(void) 
 {
 	double midterm,final,result;
 	char close_char ; 
 	printf("please enter your midterm score: ");
	scanf("%lf", &midterm);
 	while (midterm > 100 || midterm <0) {
 		printf("midterm score have to be between 0-100 ");
		scanf("%lf", &midterm);
	 }
 	printf("please enter your final score: ");
	scanf("%lf", &final);
 	while (final > 100 || final <0) {
 		printf("final score have to be between 0-100 ");
		scanf("%lf", &final);
	 }
 	result = FINALS_RATE*final + MIDTERMS_RATE*midterm;
 	printf("score: %.2f ", result);
 	double result_over4 = result/25;
 	printf("letter grade: %.2f ", result_over4);

	if (result >=95 ) {
		printf("A1");		
	}else if( result >=90 ) {
		printf("A2");
	}else if( result >=85 ) {
		printf("A3");
	}else if( result >=80 ) {
		printf("B1");
	}else if( result >=75 ) {
		printf("B2");
	}else if( result >=70 ) {
		printf("B3");
	}else if( result >=65 ) {
		printf("C1");
	}else if( result >=60 ) {
		printf("C2");
	}else if( result >=55 ) {
		printf("C3");
	}else if( result >=50 ) {
		printf("D");
	}else if( result >=0 ) {
		printf("F2");
	}else {
		printf("you entered wrong values");
	}

 }

