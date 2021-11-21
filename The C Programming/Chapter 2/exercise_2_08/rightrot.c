#include <stdio.h>
#include <math.h>

// creating function prototype
int countBit(unsigned int x);
int rightRot(unsigned int x, int n);

int main(){
	printf("%d\n", rightRot(17, 2));
	return 0;
}

// count the number of bits in a number
int countBit(unsigned int x){
	// log2(x) = logy(x)/logy(2)
	// here y can be anything eg 10 or e
	
	// length of a binary number if log base 2 of it
	return (int)(log(x)/log(2)) + 1;
}

int rightRot(unsigned int x, int n){
	int len;
	len = countBit(x);
	return (x >> n) | ((x & ~(~0 << n)) << (len-n));
}