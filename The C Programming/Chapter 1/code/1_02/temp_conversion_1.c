#include <stdio.h>

/* temprature conversion program */
int main(){
	// defining variabels
	int fahr, celsius;
	int lower, upper, step;
	
	// initializing variables
	lower = 0;
	upper = 200;
	step = 20;
	
	fahr = lower;
	while(fahr <= upper){
		// calculating celsius
		celsius = 5 * (fahr - 32) / 9;
		// printing fahr and celsius
		printf("%d\t%d\n", fahr, celsius);
		// incrementing fahr
		fahr = fahr + step;
	}
	return 0;
}