// each library has a standard header file whose name ends with the symbols ".h" example : stdio.h
// a C program line beginning with # that provides an instruction to the preprocessor example : #include <stdio.h>
// #define i=3 
/* every C function has a main function 
		int main(void)
   these lines mark the beggining of the main function where program execution begins 
*/
// return 0; 
// printf("hello world")
// unsign can't be negative so it can get bigger numbers than normal form
// %c char printf/scanf
// %d int printf/scanf
// %f double printf 
// %lf double scanf
// % reminder 5%2 is 1
// if you put %6.2f before a number the number has 6 chararters include '.' and .2 represent number count after dot. 
/* \n new line
   \t tab
   \a alert produces a a sound
   \\ backslash
   \" double quote 
*/

#include <stdio.h>
#define FINALS_RATE 0.6 
#define MIDTERMS_RATE 0.4 
 int main(void) 
 {
 	double midterm,final,result;
 	scanf("%lf %lf", &midterm, &final);
 	result = FINALS_RATE*final + MIDTERMS_RATE*midterm;
 	printf("score: %.2f", result);
 }







