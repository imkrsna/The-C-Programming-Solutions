#include <stdio.h>

#define MAXLINE 1000;

int main(){
	// defining variables
	int i, c, lim, loop;
	// initialzing variables
	lim = MAXLINE;
	i = 0;
	loop = 1;
	
	// using while loop instead of for
	while(loop){
		if(i > lim-1) loop = 0;
		else if((c = getchar()) == '\n') loop = 0;
		else if(c == EOF) loop = 0;
		++i;
	}
	printf("i: %d\n", i);
	return 0;
}