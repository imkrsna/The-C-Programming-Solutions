#include <stdio.h>
#define MAXLINE 1000

// creating funtion prototype
void escapeReverse(char s[], char t[]);
int get_line(char line[], int lim);

int main(){
	int i, len;
	char from[MAXLINE];
	char to[MAXLINE];
	
	while((len = get_line(from, MAXLINE)) > 0){
		escapeReverse(from, to); 
		printf("\n%s\n", to);
	}
	return 0;
}

/* getting input line */
int get_line(char line[], int lim){
	int i, c;
	for(i = 0; i < lim-1 && (c = getchar()) != EOF; i++){
		line[i] = c;
	}
	line[i] = '\0';
	return i;
}

/* reverse escape funtion */
void escapeReverse(char s[], char t[]){
	int i, j;
	for(i = j = 0; s[i] != '\0'; i++, j++){
		if(s[i] == '\\'){ /* if current char is \\ */
			switch(s[i+1]){
				case 'n':
					t[j] = '\n';
					i++;
					break;
				case 't':
					t[j] = '\t';
					i++;
					break;
				default:
					t[j] = s[i];
					break;
			}
		} else { /* current char not \\ */
			t[j] = s[i];
		}
	}
	/* ending line */
	t[j] = '\0';
}