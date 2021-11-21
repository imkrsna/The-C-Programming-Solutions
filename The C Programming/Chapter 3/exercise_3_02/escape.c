#include <stdio.h>
#define MAXLINE 1000

void escape(char s[], char t[]);
int get_line(char line[], int lim);

int main(){
	int i, len;
	char from[MAXLINE];
	char to[MAXLINE];
	
	while((len = get_line(from, MAXLINE)) > 0){
		escape(from, to); 
		printf("\n%s\n", to);
	}
	return 0;
}

int get_line(char line[], int lim){
	int i, c;
	for(i = 0; i < lim-1 && (c = getchar()) != EOF; i++){
		line[i] = c;
	}
	line[i] = '\0';
	return i;
}

void escape(char s[], char t[]){
	int i, j;
	for(i = j = 0; s[i] != '\0'; i++, j++){
		switch(s[i]){
			case '\t':
				t[j++] = '\\';
				t[j] = 't';
				break;
			case '\n':
				t[j++] = '\\';
				t[j] = 'n';
				break;
			default:
				t[j] = s[i];
				break;
		}
	}
	t[j] = '\0';
}