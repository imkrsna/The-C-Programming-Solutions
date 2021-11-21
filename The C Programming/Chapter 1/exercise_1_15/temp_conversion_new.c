#include <stdio.h>

// creating function prototype
float fahr_to_celc(float fahr);

int main(){
	// initializing variables
	float fahr;
	int lower, upper, step;
	
	lower = 0;
	upper = 200;
	step = 20;
	
	fahr = lower;
	while(fahr <= upper){
		// using fahr_to_celc function inside printf function
		printf("%3.0f %6.1f\n", fahr, fahr_to_celc(fahr));
		fahr += step;
	}
	return 0;
}

// funtion to calculate celcius from fahr
float fahr_to_celc(float fahr){
	float celcius;
	celcius = (5.0/9.0) * (fahr - 32.0);
	return celcius;
}