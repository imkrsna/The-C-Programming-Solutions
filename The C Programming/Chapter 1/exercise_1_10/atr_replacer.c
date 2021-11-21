#include <stdio.h>

/* replace tab with \t and backspace by \b and \ by \\*/
int main(){
	int c;
	while((c = getchar()) != EOF){
		if(c == '\t'){
			putchar('\\');
			putchar('t');
		}
		else if(c == '\b'){
			putchar('\\');
			putchar('b');
		}
		else if(c == '\\'){
			putchar('\\');
			putchar('\\');
		}
		else{
			putchar(c);
		}
	}
	return 0;
}