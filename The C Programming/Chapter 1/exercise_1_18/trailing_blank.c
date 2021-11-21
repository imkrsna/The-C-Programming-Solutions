#include <stdio.h>

#define MAXLINE 1000

// creaing function prototype
int get_line(char line[], int lim);
void remove_trailing_blank(char line[], int lim);

int main(){
	int len;
	char line[MAXLINE];
	// getting and computing line length
	while((len = get_line(line, MAXLINE)) > 0){
		// using remove_trailing_blank to remove trailing spaces
		remove_trailing_blank(line, len);
		printf("%s", line);
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

void remove_trailing_blank(char line[], int lim){
	int i;
	// reverse looping line and removeing ' ' and '\t'
	for(i = lim - 2; line[i] == ' ' || line[i] == '\t'; --i);
	
	// ending the new line
	line[lim - 1] = '\n';
	line[lim] = '\0';
}