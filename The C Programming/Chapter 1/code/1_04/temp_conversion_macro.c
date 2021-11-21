#include <stdio.h>

// defining symbolic constant (macros)
#define LOWER 0
#define UPPER 300
#define STEP 20

int main(){
	// defining variables
	int fahr;
	// looping from 0 to 300 with step of 20
	for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP){
		// calculating and printing fahr, celsius
		printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32.0));
	}
	return 0;
}