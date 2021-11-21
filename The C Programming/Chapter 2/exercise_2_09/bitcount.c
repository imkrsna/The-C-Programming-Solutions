#include <stdio.h>

// creating funtion prototype
int bitcount(unsigned x);

int main(){
	printf("%d\n", bitcount(18));
	return 0;
}

// counts number of 1-buts in x
int bitcount(unsigned x){
	int b;
	for(b = 0; x != 0; x &= (x-1)){
		b++;
	}
	return b;
}