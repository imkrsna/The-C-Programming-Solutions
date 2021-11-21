#include <stdio.h>

// creating function prototype
int lower(char c);

int main(){
	// defining variables
	int i;
	char line[] = "HELLO HOW ARE YOU?";
	// running loop on line (array)
	for(i = 0; line[i] != '\0'; ++i){
		// getting line new value using lower function
		line[i] = lower(line[i]);
	}
	printf("result: %s\n", line);
	return 0;
}

int lower(char c){
	// if char is Upper
	if(c >= 'A' && c <= 'Z'){
		// return lower version of char
		return c + ('a' - 'A');
	} else {
		// return char
		return c;
	}
}

// NOTE: this code is only valid for ASCII and not for EBCDIC
// in ASCII upper and lower case letters are at fixed distance
// but in EBCDIC this is not the case