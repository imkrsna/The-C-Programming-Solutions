#include <stdio.h>

// creating funtion prototype;
int bitcount(unsigned x);

int main(){
	printf("%d\n", bitcount(18));
	return 0;
}

int bitcount(unsigned x){
	// counting number of 1bits in x
	int b;
	for(b = 0; x != 0; x >>= 1){
		if(x & 01){
			b++;
		}
	}
	return b;
}