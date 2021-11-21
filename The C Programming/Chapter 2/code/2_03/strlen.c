#include <stdio.h>

// creating function prototype
int strlen(char string[]);

int main(){
	// running strlen in main
	printf("%d\n", strlen("this is a test string"));
}

int strlen(char string[]){
	int i = 0;
	// looping array till end
	while(string[i] != '\0'){
		++i;
	}
	return i;
}