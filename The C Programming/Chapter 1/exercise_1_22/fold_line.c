#include <stdio.h>

#define MAXLINE 1000
#define OFFSET 40

// creating function prototype
int get_line(char line[], int lim);

int main(){
	// defining variables
	int i, j, len;
	char line[MAXLINE];
	char split[MAXLINE];
	
	// getting input length and spliting them
	while((len = get_line(line, MAXLINE)) > 0){
		// looping through line array
		for(i = 0, j = 0; i < len && line[i] != '\0'; ++i, ++j){
			// putting line char in split array
			split[j] = line[i];
			// after every word aka space
			if(line[i] == ' ' || line[i] == '\t'){
				// if number of chars in split is greater then OFFSET
				if(j >= OFFSET){
					// adding \n in end of line
					split[j+1] = '\n';
					split[j+2] = '\0';
					printf("%s", split);
					// reseting j (-1 because we have ++j in loop so it will become 0
					j = -1;
				}
			}
		}
		// printing rest of line
		if(j > 0){
			split[j] = '\0';
			printf("%s", split);
			j = -1;
		}
	}
	return 0;
}

int get_line(char line[], int lim){
	// defining variables
	int i, c;
	// getting input and storing in line
	for(i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i){
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