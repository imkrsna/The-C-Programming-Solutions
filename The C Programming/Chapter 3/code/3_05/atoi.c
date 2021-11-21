#include <stdio.h>
#include <ctype.h>	/* for isspace() and isdigit() */

#define MAXLINE 1000

// creting funtion prototype
int atoi(char s[]);
int get_line(char line[], int lim);

int main(){
	int i, len;
	char line[MAXLINE];
	while((len = get_line(line, MAXLINE)) > 0){
		printf("%d\n", atoi(line));
	}
	return 0;
}

/* get line input */
int get_line(char line[], int lim){
	int c, i;
	for(i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; i++){
		line[i] = c;
	}
	if(c == '\n') line[i++] = '\n';
	line[i] = '\0';
	return i;
}

/* convert string to int */
int atoi(char s[]){
	int i, n, sign;
	for(i = 0; isspace(s[i]); i++);	/* skip spaces */
	sign = (s[i] == '-') ? -1: 1;	/* getting sign */
	if(s[i] == '-' || s[i] == '+') i++;	/* skiping sign */
	for(n = 0; isdigit(s[i]); i++){
		n = 10 * n + (s[i] - '0');
	}
	return sign * n;
}