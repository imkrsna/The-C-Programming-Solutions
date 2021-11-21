#include <stdio.h>

#define MAXLINE 1000

// defining external variables
int max;
char line[MAXLINE];
char longest[MAXLINE];

// creating function prototype
int get_line(void);
void copy(void);

int main(){
	
	// defining external variables using extern
	int len;
	extern int max;
	extern char longest[];
	
	// getting and computing line length
	while((len = get_line()) > 0){
		if(len > max){
			max = len;
			copy();
		}
	}
	// printing line if exist
	if(max > 0){
		printf("%s", longest);
	}
	return 0;
}

int get_line(void){
	// defining variables
	int i, c;
	extern char line[];
	
	// getting and storing char till end of line
	for(i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i){
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

// copy array from one to another
void copy(void){
	int i;
	extern char line[];
	extern char longest[];
	
	i = 0;
	while((longest[i] = line[i]) != '\0'){
		++i;
	}
}