#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int get_line(char line[], int lim);
int htoi(char hex[]);

int main(){
	int hex[MAXLINE];
	printf("%d\n", htoi(hex));
	return 0;
}