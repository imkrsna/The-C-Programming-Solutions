#include <stdio.h>

/* temperature conversion program using for */
int main(){
	// defining variabels
	int fahr;
	// looping from 0 to 300 with steps of 20
	for(fahr = 0; fahr <= 300; fahr = fahr + 20){
		// calculating and printing fahr , celsius
		printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32.0));
	}
	return 0;
}