#include <stdio.h>

#define MAXLINE 1000

// creating prototype for functions
int get_line(char line[], int lim);
void copy(char to[], char from[]);

int main(){
	
	// initializing variabels
	int len, max;
	char line[MAXLINE];
	char longest[MAXLINE];
	
	// getting and computing line lengths
	max = 0;
	while((len = get_line(line, MAXLINE)) > 0){
		if(len > max){
			max = len;
			// storing line to the longest
			copy(longest, line);
		}
		// printing line length
		printf("line length: %d\n", len);
	}
	if(max > 0){
		printf("%s\n", longest);
	}
	return 0;
}

int get_line(char line[], int lim){
	int i, c;
	// getting and storing char till end of line
	for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i){
		line[i] = c;
	}
	// adding \n to the line if exist
	if(c == '\n'){
		line[i] = '\n';
		++i;
	}
	// marking the end of line
	line[i] = '\0';
	return i;
}

// copy char array from one to another
void copy(char to[], char from[]){
	int i;
	i = 0;
	while((to[i] = from[i]) != '\0'){
		++i;
	}
}