#include <stdio.h>

#define MAXLINE 1000

// creating function prototype
int get_line(char line[], int lim);
void reverse(char line[], int lim);

int main(){
	
	// initializing variables
	int len;
	char line[MAXLINE];
	
	// getting and computing line length
	while((len = get_line(line, MAXLINE)) > 0){
		// using reverse to reverse the line and copy it in reverse
		reverse(line, len);
		printf("%s", line);
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

void reverse(char line[], int lim){
	// initializing temp variables
	int i_front, i_back;
	char temp;
	
	i_front = 0;
	i_back = lim - 2; // exculding \n and \0
	
	while(i_back > i_front){
		// storing front in temp
		temp = line[i_front];
		// putting back in front
		line[i_front] = line[i_back];
		// putting temp = front in back
		line[i_back] = temp;
		
		// changing temp variables
		++i_front;
		--i_back;
	}
}