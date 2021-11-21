#include <stdio.h>

#define MAXLINE 1000

// creating function prototype
int get_line(char line[], int lim);
void reverse(char line[], char reverse[], int lim);

int main(){
	
	// initializing variables
	int len;
	char line[MAXLINE];
	char reverse_line[MAXLINE];
	
	// getting and computing line length
	while((len = get_line(line, MAXLINE)) > 0){
		// using reverse to reverse the line and copy it in reverse
		reverse(line, reverse_line, len);
		printf("%s", reverse_line);
	}
	return 0;
}

int get_line(char line[], int lim){
	int i, c;
	// getting and storing char till the end of line
	for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i){
		line[i] = c;
	}
	// adding \n if exist
	if(c == '\n'){
		line[i] = '\n';
		++i;
	}
	// marking end of line
	line[i] = '\0';
	return i;
}

void reverse(char line[], char reverse[], int lim){
	int i;
	// looping throught line and putting char in reverse
	for(i = lim - 2; i >= 0; --i){
		reverse[lim - 2 - i] = line[i];
	}
	
	// ending reverse
	reverse[lim - 1] = '\n';
	reverse[lim] = '\0';
}