#include <stdio.h>

#define MAXLINE 1000
#define LIMIT 80

// creating prototype of functions
int get_line(char line[], int lim);

int main(){
	
	// initializing variables
	int len;
	char line[MAXLINE];
	// getting and computing length of lines
	while((len = get_line(line, MAXLINE)) > 0){
		// printing line if longer then LIMIT
		if(len > LIMIT){
			printf("%s", line);
		}
	}
	return 0;
}

int get_line(char line[], int lim){
	int i, c;
	// getting and storing char till end of line
	for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i){
		line[i] = c;
	}
	// adding \n to line if exist
	if(c == '\n'){
		line[i] = '\n';
		++i;
	}
	// marking end of line
	line[i] = '\0';
	return i;
}
	