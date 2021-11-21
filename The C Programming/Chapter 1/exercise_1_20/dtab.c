#include <stdio.h>

#define TAB_LENGTH 2

/* deta program */
int main(){
	int i, c, nr_of_space;
	while((c = getchar()) != EOF){
		if(c == '\t'){
			nr_of_space = TAB_LENGTH;
			
			while(nr_of_space){
				putchar(' ');
				--nr_of_space;
			}
			
		} else {
			putchar(c);
		}
	}
	return 0;
}