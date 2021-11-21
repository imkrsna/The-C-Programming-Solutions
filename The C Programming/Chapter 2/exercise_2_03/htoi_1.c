#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

#define MAXLINE 1000

int get_line(char line[], int lim);
int htoi(char hex[]);

int main(){
	char hex[MAXLINE];
	get_line(hex, MAXLINE);
	printf("%d\n", htoi(hex));
}

int get_line(char line[], int lim){
	int i, c;
	for(i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i){
		line[i] = c;
	}
	line[i] = '\0';
	return i;
}

int htoi(char hex[]){
	int i, j, n, temp, len;
	len = strlen(hex);
	n = 0;
	for(i = 0; i <= len; ++i) hex[i] = tolower(hex[i]);
	for(i = len-1, j = 0; hex[i] != 'x' && i >= 0; --i, ++j){
		if(isdigit(hex[i])) temp = hex[i] - '0';
		if(isalpha(hex[i]) && hex[i] <= 'f') temp = hex[i] - 'a' + 10;
		if((hex[i] >= '0' && hex[i] <= '9') || (hex[i] >= 'a' && hex[i] <= 'f')){
			n = n + temp * pow(16, j);
		} else {
			printf("error: Not a valid hex value, Use 0-9 and a-f or A-F");
		}
	}
	return n;
}