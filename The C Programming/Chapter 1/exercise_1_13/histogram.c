#include <stdio.h>

#define IN 1
#define OUT 0

#define BUFFER 100

int main(){
	// creating variables
	int c, i, j, state, max_len, max_times;
	// creating buf (array) to take input words size with max size of BUFFER
	int buf[BUFFER];
	
	// initializing max_len and max_times with default state: OUT
	max_len = max_times = 0;
	state = OUT;
	
	// initializing the buf (array)
	for(i = 0; i < BUFFER; ++i){
		buf[i] = 0;
	}
	
	// using i as current word length
	i = 0;
	
	// collectiong and computing inputs
	while((c = getchar()) != EOF){
		// condition for ending a word
		if(c == ' ' || c == '\n' || c == '\t'){
			state = OUT;
			
			// calculating max_len
			if(i > max_len){
				max_len = i;
			}
			
			// incrementing the times of words with respective lengths
			if(i > BUFFER){
				i = BUFFER;
			}
			else{	
				++buf[i];
			}
			
			// calculating max_times
			if(buf[i] > max_times){
				max_times = buf[i];
			}
			
			// resetting the i (lenght of word)
			i = 0;
		
		// condition for starting a word
		} else if(state == OUT){
			// incrementing the length of word (including the first letter)
			++i;
			state = IN;
		
		// condition for letters of word
		} else if(state == IN){
			// incrementing the length of word
			++i;
		}
	}
	
	/* Creating Horizonal Histrogram */
	printf("\n");
	printf("+-----------------------------+\n");
	printf("|    Horizontal Histrogram    |\n");
	printf("|                             |\n");
	printf("| NOTE:   length|             |\n");
	printf("|               +-------      |\n");
	printf("|                 amount      |\n");
	printf("|                             |\n");
	printf("+-----------------------------+\n");
	printf("\n");
	
	// printing verticle line with y axis
	for(i = max_len; i > 0; --i){
		printf(" %02d | ", i);
		
		// printing horizontal line
		for(j = 1; j <= max_times; ++j){
			if(buf[i] >= j){
				printf("===");
			} else {
				printf("   ");
			}
		}
		printf("\n");
	}
	
	// printing x axis
	printf(" 00 +");
	for(i = 0; i <= max_times; ++i){
		printf("---");
	}
	printf("\n     ");
	
	// printing last horizontal line
	for(i = 1; i <= max_times; ++i){
		printf(" %02d", i);
	}
	
	
	/* Creating Vertical Histrogram */
	printf("\n\n");
	printf("+-----------------------------+\n");
	printf("|     Vertical Histrogram     |\n");
	printf("|                             |\n");
	printf("| NOTE:   amount|             |\n");
	printf("|               +-------      |\n");
	printf("|                 length      |\n");
	printf("|                             |\n");
	printf("+-----------------------------+\n");
	printf("\n");
	
	// printing verticle line with y axis
	for(i = max_times; i > 0; --i){
		printf(" %02d |", i);
		
		// printing horizontal lines
		for(j = 1; j <= max_len; ++j){
			if(buf[j] >= i){
				printf(" ##");
			} else {
				printf("   ");
			}
		}
		printf("\n");
	}
	
	// printing x axis
	printf(" 00 +");
	for(i = 0; i <= max_len; ++i){
		printf("---");
	}
	printf("\n     ");
	
	// printing last horizontal line
	for(i = 1; i <= max_len; ++i){
		printf(" %02d", i);
	}
	printf("\n");
	
	return 0;
}
	