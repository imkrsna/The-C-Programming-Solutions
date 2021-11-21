#include <stdio.h>

#define TAB_LENGTH 8

int main(){
	// defining variables
	int c, nr_of_spaces, pos;
	nr_of_spaces = 0;
	
	while((c = getchar()) != EOF){
		++pos;
		if(c == ' '){
			++nr_of_spaces;
			// for getting the length of next tab we find the reminder of position and tab_length
			// tab length is length of text colums (this is how a tab works as a table)
			if((pos % TAB_LENGTH) == 0 && nr_of_spaces > 0){
				putchar('\t');
				nr_of_spaces = 0;
			}
		} else {
			// printing spaces if exists
			while(nr_of_spaces){
				putchar(' ');
				--nr_of_spaces;
			}
			putchar(c);
		}
	}
	return 0;
}