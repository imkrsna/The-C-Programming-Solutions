#include <stdio.h>

// creating function prototype
int atoi(char s[]);

int main(){
	// running atoi in printf
	printf("Result: %d", atoi("12345678"));
	return 0;
}

int atoi(char s[]){
	// defining variables
	int i, n;
	n = 0;
	// looping through the s (array)
	for(i = 0; s[i] >= '0' && s[i] <= '9'; ++i){
		// multiplying previous degit with 10 and adding current degit
		n = (10 * n) + (s[i] - '0');
	}
	return n;
}