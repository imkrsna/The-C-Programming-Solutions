#include <stdio.h>

unsigned getbits(int x, int p, int n);

int main(){
	printf("%u\n", getbits(1234, 4, 3));
	return 0;
}

unsigned getbits(int x, int p, int n){
	return (x >> (p+1-n)) & ~(~0 << n);
}