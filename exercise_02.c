#include <stdio.h>
#include <math.h>

int get_value(char* value);

int main(void){
	int x;
	int h;
	int result;
	int final_result;
	x = get_value("x");
	h = get_value("h");
	result = (int) pow(x,h);
	final_result = get_final_result(result);
	while ((final_result-10) >= 0){
		final_result = get_final_result(final_result);
	}
	printf("The result is: %d", final_result);

}

int get_value(char* value){
	int response;
	printf("Please enter %s: ", value);
	scanf("%d",&response);
	return response;
}

int get_final_result (int result){
	int number;
	int addition=0;	
	while (result>0){
		number = result%10;
		addition = addition + number ;
		result = result/10;
	}
	return addition;
}






