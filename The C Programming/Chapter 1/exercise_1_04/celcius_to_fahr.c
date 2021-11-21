#include <stdio.h>

/* print temp table celcius to fahr */
int main(){
	float fahr, celcius;
	int lower, upper, step;
	
	lower = 0;
	upper = 200;
	step = 20;
	celcius = lower;
	
	printf(" Celc  Fahr \n");
	printf("------------\n");
	
	while(celcius <= upper){
		fahr = ((9.0 / 5.0) * celcius) + 32.0;
		printf(" %3.0f %6.0f\n", celcius, fahr);
		celcius += step;
	}
	return 0;
}