#include <stdio.h>

// creating function template
int setbits(int x, int p, int n, int y);

int main(){
	printf("%d\n", setbits(17, 3, 2, 2));
	return 0;
}

int setbits(int x, int p, int n, int y){ 

	// (~0 << n) making a 1-bit binary then adding n 0 at right
	// ~(~0 << n) inversing the whole template bit
	// ~(~(~0 << n) << (p+1-n)) adding (p+1-n) 0 at the right and inversing it
	// x & ~(~(~0 << n) << (p+1-n)) AND with x to make bits 0 in x
	
	// (y & ~(~0 << n)) << (p+1-n) same thing with y but before adding 0 at
	// right we AND with y to get rightmost bits of y
	
	// x & ~(~(~0 << n) << (p+1-n)) | (y & ~(~0 << n)) << (p+1-n);
	// OR with x and y

	return x & ~(~(~0 << n) << (p+1-n)) | (y & ~(~0 << n)) << (p+1-n);
}