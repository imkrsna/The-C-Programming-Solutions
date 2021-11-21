#include <stdio.h>

/* prints the temp table from top to down ie 300 to 0 */
int main(){
	float celcius, fahr;

	printf(" Fahr \t Celc \n");
	printf("--------------\n");

	for(fahr = 300; fahr >= 0; fahr -= 20){
		celcius = (5.0 / 9.0) * (fahr - 32.0);
		printf(" %3.0f\t%5.1f\n", fahr, celcius);
	}

	return 0;
}