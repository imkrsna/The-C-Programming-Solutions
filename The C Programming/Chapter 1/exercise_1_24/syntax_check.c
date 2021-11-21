#include <stdio.h>

#define MAXLINE 5000

// defining variables
int inSquare, inCurly, inRound, inComment, inMultiComment, inString;

// creating function prototype
int get_code(char line[], int lim);
void check_case(void);

int main(){
	// defining variabels
	int i, len;
	char line[MAXLINE];
	extern int inSquare, inCurly, inRound, inComment, inMultiComment, inString;
	inSquare = inCurly = inRound = inComment = inMultiComment = inString = 0;
	
	// getting and computing code length
	while((len = get_code(line, MAXLINE)) > 0){
		// looping through code
		for(i = 0; i < len; ++i){
			// Condition when not in String or Comment
			if(inString == 0 && inComment == 0 && inMultiComment == 0){
				if(line[i] == '['){
					++inSquare;
				} else if(line[i] == ']'){
					--inSquare;
				} else if(line[i] == '{'){
					++inCurly;
				} else if(line[i] == '}'){
					--inCurly;
				} else if(line[i] == '('){
					++inRound;
				} else if(line[i] == ')'){
					--inRound;
				} else if(line[i] == '"'){
					++inString;
				} else if(line[i] == '/' && line[i+1] == '*'){
					++inMultiComment;
				} else if(line[i] == '/' && line[i+1] == '/'){
					++inComment;
				}
			}
			
			// Condition when in String
			if(inString != 0 && line[i] == '"'){
				--inString;
			}
			// Condition when in Comment
			if(inComment != 0 && line[i] == '\n'){
				--inComment;
			}
			// Condition when in Multi Comment
			if(inMultiComment != 0 && line[i] == '*' && line[i+1] == '/'){
				--inMultiComment;
			}
		}
		// checking case at last
		check_case();
		
	}
	return 0;
}

int get_code(char line[], int lim){
	int i, c;
	for(i = 0; i < lim-1 && (c = getchar()) != EOF; ++i){
		line[i] = c;
	}
	line[i] = '\0';
	return i;
}


void check_case(void){
	// extern outer variables
	extern int inSquare, inCurly, inRound, inComment, inMultiComment, inString;
	// Bracket Check
	if(inSquare != 0){
		printf("Unbalanced Brackets\n");
	}
	// Curly Check
	if(inCurly != 0){
		printf("Unbalanced Braces\n");
	}
	// Round Check
	if(inRound != 0){
		printf("Unbalanced Parentheses\n");
	}
	// Comment Check
	if(inComment != 0){
		printf("Unbalanced // Comment\n");
	}
	// MultiComment Check
	if(inMultiComment != 0){
		printf("Unbalanced /* Comment */\n");
	}
	// String Check
	if(inString != 0){
		printf("Unbalanced Strings\n");
	}
	
	// resetting all checks
	inSquare = inCurly = inRound = inComment = inMultiComment = inString = 0;
}