#include <stdio.h>

// creating funtion prototype
int lower(char c);

int main(){
	int i;
	char s[] = "HELLO WORLD!";
	for(i = 0; s[i] != '\0'; i++){
		printf("%c", lower(s[i]));
	}
	printf("\n");
	return 0;
}

int lower(char c){
	return (c >= 'A' && c <= 'Z') ? c + ('a' - 'A') : c ;
}