#include <stdio.h>

/* remove extra blankspace */
int main(){
	int c, prev;
	prev = '_';
	
	while((c = getchar()) != EOF){
		if(c == ' '){
			if(prev != ' '){
				putchar(c);
			}
		}
		else{
			putchar(c);
		}
		prev = c;
	}
	return 0;
}