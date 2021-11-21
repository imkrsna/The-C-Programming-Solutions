#include <stdio.h>

/* temprature conversion program */
int main(){
	// defining variabels
	float fahr, celsius;
	int lower, upper, step;
	
	// initializing variables
	lower = 0;
	upper = 200;
	step = 20;
	
	fahr = lower;
	while(fahr <= upper){
		// calculating celsius
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		// printing fahr and celsius
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		// incrementing fahr
		fahr = fahr + step;
	}
	return 0;
}