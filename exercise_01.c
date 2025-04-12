#include <stdio.h>
#include <string.h>

#define EARTH_GRAVITY_CONSTANT -10
#define MOON_GRAVITY_CONSTANT -2
#define MARS_GRAVITY_CONSTANT -4

int calculate(int falling_time, int initial_velocity, int initial_position, int gravity_constant);
int get_value(char* value);
int main(void){
	int falling_time;
	int initial_velocity;
	int initial_position;
	int final_position;
	int gravity_constant;
	char gravity_planet[20];
	printf("Please enter the planet: ");
	scanf("%s", gravity_planet);
	if (strcmp(gravity_planet, "EARTH")==0){
		gravity_constant = EARTH_GRAVITY_CONSTANT;		
	}else if (strcmp(gravity_planet, "MOON")==0){
		gravity_constant = MOON_GRAVITY_CONSTANT;	
    }else if (strcmp(gravity_planet, "MARS")==0){
		gravity_constant = MARS_GRAVITY_CONSTANT;	
	}else{
		printf("Unknown planet, gravity constant is -1 \n");
		gravity_constant = -1 ;
	}
	falling_time = get_value("falling time");
	initial_velocity = get_value("inital velocity");
	initial_position = get_value("initial position");
	final_position = calculate(falling_time,initial_velocity,initial_position,gravity_constant);
	printf("This is the result: %d" , final_position);
}

int get_value(char* value){
	int response;
	printf("Please enter %s: ", value);
	scanf("%d",&response);
	return response;
}

int calculate(int falling_time, int initial_velocity, int initial_position, int gravity_constant){
	int result;
	result = (gravity_constant * falling_time * falling_time)/2 + (initial_velocity * falling_time) + initial_position;
	return result;
	
}
