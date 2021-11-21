#include <stdio.h>

// creating max buffer size (histrogram max size)
#define BUFFER 99

int main(){
	// initializing variables
	int c, i, j, max_times;
	int buf[27];
	
	max_times = 0;
	
	// intializing buf (array)
	for(i = 0; i < 27; ++i){
		buf[i] = 0;
	}
	
	// computing and storing data in buf (array)
	while((c = getchar()) != EOF){
		// checking if input is a alphabet
		if(c >= 'a' && c <= 'z'){
			if(buf[c - 'a'] < BUFFER){
				++buf[c - 'a'];
			}
			if(buf[c - 'a'] > max_times){
				max_times = buf[c - 'a'];
			}
		// else adding it to others
		} else {
			if(buf[26] < BUFFER){
				++buf[26];
			}
			if(buf[26] > max_times){
				max_times = buf[26];
			}
		}
	}
	
	/* Vertical Histrogram */
	
	// creating y axis
	for(i = max_times; i > 0; --i){
		printf(" %02d |", i);

		// creating x axis
		for(j = 0; j < 27; ++j){
			if(buf[j] >= i){
				printf(" #");
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}
	
	// creating last x axis
	printf(" 00 +");
	for(i = 0; i <= 27; ++i){
		printf("--");
	}
	printf("\n     ");
	printf(" a b c d e f g h i j k l m n o p q r s t u v w x y z oth");

	return 0;
}