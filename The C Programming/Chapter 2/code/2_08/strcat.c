#include <stdio.h>

void str_cat(char s[], char t[]);

int main(){
	char line1[] = "Hello ";
	char line2[] = "World!";
	
	str_cat(line1, line2);
	printf("%s\n", line1);
}

void str_cat(char s[], char t[]){
	int i, j;
	i = j = 0;
	while(s[i] != '\0') ++i;
	while((s[i++] = t[j++]) != '\0');
}