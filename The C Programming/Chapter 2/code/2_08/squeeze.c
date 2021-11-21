#include <stdio.h>

// creating function prototype
void squeeze(char line[], int c);

int main(){
	char line[] = "Hello World!";
	char c = 'l';
	
	squeeze(line, c);
	printf("%s\n", line);
}

void squeeze(char line[], int c){
	int i, j;
	
	// looping through the line
	for(i = j = 0; line[i] != '\0'; i++){
		// if char is not c
		if(line[i] != c){
			// move all char bit back
			line[j++] = line[i];
		}
	}
	line[j] = '\0';
}