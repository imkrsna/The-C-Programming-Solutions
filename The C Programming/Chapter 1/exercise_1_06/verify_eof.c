#include <stdio.h>

/* verify if input is not equal to EOF */
int main(){
	int c;
	c = (getchar() != EOF);
	printf("%d\n", c);
	return 0;
}