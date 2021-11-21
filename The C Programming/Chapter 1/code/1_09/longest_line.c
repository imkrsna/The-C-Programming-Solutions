#include <stdio.h>

#define MAXLINE 1000

// creating function prototype
int get_line(char line[], int max);
void copy(char to[], char from[]);

int main(){
	
	// intializing variables
	int len, max;
	char line[MAXLINE];
	char longest[MAXLINE];
	max = 0;
	
	// getting and computing lines
	while((len = get_line(line, MAXLINE)) > 0){
		if(len > max){
			max = len;
			copy(longest, line);
		}
	}
	
	// printing longest line
	if(max > 0){
		printf("%s\n", longest);
	}
	return 0;
}

int get_line(char s[], int max){
	int c, i;
	
	// getting input till EOF and \n
	for(i = 0; i < max-1 && (c = getchar()) != EOF && c != '\n'; ++i){
		s[i] = c;
	}
	
	// adding \n to line array
	if(c == '\n'){
		s[i] = '\n';
		++i;
	}
	
	// ending the array
	s[i] = '\0';
	return i;
}

// copy array from one to another
void copy(char to[], char from[]){
	int i;
	
	i = 0;
	while((to[i] = from[i]) != '\0'){
		++i;
	}
}