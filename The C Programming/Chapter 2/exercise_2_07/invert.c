#include <stdio.h>

// creating function prototype
int invert(int x, int p, int n);

int main(){
	printf("%d\n", invert(17, 3, 2));
	return 0;
}

int invert(int x, int p, int n){
	// here we are using ^ for exclusive OR
	return x ^ (~(~0 << n) << (p+1-n));
}