#include <stdio.h>

// creating function prototype
int any(char s[], char t[]);

int main(){
	char s[] = "Hello";
	char t[] = "World";

	printf("position: %d\n", any(s, t));
}

int any(char s[], char t[]){
	// defining varibles
	int i, j;
	// looping through s
	for(i = 0; s[i] != '\0'; ++i){
		// looping through t
		for(j = 0; t[j] != '\0'; ++j){
			// if t char in s return pos
			if(s[i] == t[j]){
				return i+1;
			}
		}
	}
	return -1;
}