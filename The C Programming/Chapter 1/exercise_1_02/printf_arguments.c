#include <stdio.h>

/* testing /c in printf function */
int main(){
	printf("hello world\c");
	
	// warning: unknown escape sequence: '\c'
	// printf("hello world\c");
    //        ^~~~~~~~~~~~~~~
	
	// output: hello worldc
	
	return 0;
}