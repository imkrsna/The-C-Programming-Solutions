#include <stdio.h>

// creating character prototype
void squeeze(char s[], char t[]);

int main(){
	char s[] = "Hello";
	char t[] = "World";
	
	squeeze(s, t);
	printf("%s\n", s);
}

void squeeze(char s[], char t[]){
	// defining variales
	int i, j, k, l;
	// looping through s
	for(i = j = l = 0; s[i] != '\0'; ++i){
		// looping through t
		for(k = 0; t[k] != '\0' && l == 0; ++k){
			if(s[i] == t[k]) l = 1;
		}
		// if above loop completed
		if(l == 0){
			// shift character
			s[j++] = s[i];
		}
		// reseting loop
		l = 0;
	}
	// ending s
	s[j] = '\0';
}