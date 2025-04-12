/*
-> enter the student number
-> calculate average fro each student 
-> calculate mideterm average
-> calculate final average
-> calculate weighted average of the two
*/


#include <stdio.h>
#define FINALS_RATE 0.6 
#define MIDTERMS_RATE 0.4 

double get_midterm_score(void);
double get_final_score(void);
const char* get_letter_grade(double result);

 int main(void) 
 {
 	double midterm, final, result;
	double midterm_total, final_total;
	double midterm_avg, final_avg;
	double result_avg;
	int student_count,i; 
	const char* letter_grade;
 	
 	printf("please enter student number: ");
 	scanf("%d", &student_count);
 	for (i=1; i<=student_count; i++){
 		midterm = get_midterm_score();
 		final = get_final_score();
 		result = FINALS_RATE*final + MIDTERMS_RATE*midterm; 		
 		printf("%d students midterm is %.2lf , final is %.2lf ", i, midterm, final);
 		printf("score: %.2lf ", result);
 		letter_grade = get_letter_grade(result);
		printf("%s", letter_grade);
		midterm_total = midterm_total + midterm;
		final_total = final_total + final;
	}
	midterm_avg = midterm_total / student_count;		
	printf("\naverage of midterms: %.2f", midterm_avg);
	final_avg = final_total / student_count;		
	printf("\naverage of finals: %.2f",final_avg);
	result_avg = midterm_avg * MIDTERMS_RATE + final_avg * FINALS_RATE ;
	printf("\naverage of scores: %.2f", result_avg);
 }
 
double get_midterm_score(void){
	double midterm_input;
	printf("\nplease enter your midterm score: ");
	scanf("%lf", &midterm_input);
 	while (midterm_input > 100 || midterm_input <0) {
 		printf("midterm score have to be between 0-100 ");
		scanf("%lf", &midterm_input);
	 }
	return midterm_input;
}

double get_final_score(void){
	double final_input;
 	printf("please enter your final score: ");
	scanf("%lf", &final_input);
 	while (final_input > 100.0 || final_input <0) {
 		printf("final score have to be between 0-100 ");
		scanf("%l", &final_input);
	}
	return final_input;
}

const char* get_letter_grade(double result){
	double result_over4 = result/25;
 	printf("letter grade: %.2f ", result_over4);
	if (result >=95 ) {
		return "A1";		
	}else if( result >=90 ) {
		return "A2";
	}else if( result >=85 ) {
		return "A3";
	}else if( result >=80 ) {
		return "B1";
	}else if( result >=75 ) {
		return "B2";
	}else if( result >=70 ) {
		return "B3";
	}else if( result >=65 ) {
		return "C1";
	}else if( result >=60 ) {
		return "C2";
	}else if( result >=55 ) {
		return "C3";
	}else if( result >=50 ) {
		return "D";
	}else if( result >=0 ) {
		return "F2";
	}else {
		return "you entered wrong values";
	}
}
