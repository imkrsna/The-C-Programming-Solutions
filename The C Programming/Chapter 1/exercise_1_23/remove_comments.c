#include <stdio.h>

#define MAXLINE 5000
#define TRUE 1
#define FALSE 0

// creating function prototype
int get_code(char line[], int lim);

int main(){
	// defining variables
	int i, len, inComment, inMultiComment, inString;
	char line[MAXLINE];
	inComment = inMultiComment = inString = FALSE;
	
	while((len = get_code(line, MAXLINE)) > 0){
		for(i = 0; i < len; ++i){
			// inComment Condition
			if(inString == FALSE && inMultiComment == FALSE && line[i] == '/' && line[i+1] == '/'){
				inComment = TRUE;
			}
			// inComment Ending Condition
			else if(inComment == TRUE && line[i] == '\n'){
				inComment = FALSE;
			}
			
			// inMultiComment Condition
			if(inString == FALSE && inComment == FALSE && line[i] == '/' && line[i+1] == '*'){
				inMultiComment = TRUE;
			}
			// inMultiComment Ending Condition
			else if(inMultiComment == TRUE && line[i] == '*' && line[i+1] == '/'){
				inMultiComment = FALSE;
				i += 2;
			}
			
			// inString Condition
			if(inString == FALSE && line[i] == '"'){
				inString = TRUE;
			}
			// inString Ending Condition
			else if(inString == TRUE && line[i] == '"'){
				inString = FALSE;
			}
			
			
			// checking and printing char
			if(inString == FALSE){
				if(inComment == FALSE && inMultiComment == FALSE){
					putchar(line[i]);
				}
			} else if(inString == TRUE){
				putchar(line[i]);
			}
		}
		
		// reseting comment states
		inComment = inMultiComment = inString = FALSE;
	}
	return 0;
}

int get_code(char line[], int lim){
	int i, c;
	// getting and computing input
	for(i = 0; i < lim-1 && (c = getchar()) != EOF; ++i){
		line[i] = c;
	}
	// marking end of line
	line[i] = '\0';
	return i;
}