#include <stdio.h>
#include <limits.h>

int main(){
	printf("===================== CHAR ======================\n");
	printf("Char Bits: %d\n", CHAR_BIT);
	printf("Signed Char Max: %d\n", SCHAR_MAX);
	printf("Signed Char Min: %d\n", SCHAR_MIN);
	printf("Unsigned Char Max: %d\n", UCHAR_MAX);
	printf("\n");
	
	printf("====================== INT ======================\n");
	printf("Int Max: %d\n", INT_MAX);
	printf("Int Min: %d\n", INT_MIN);
	printf("Unsigned Int Max: %d\n", UINT_MAX);
	printf("\n");
	
	printf("===================== SHORT =====================\n");
	printf("Short Max: %d\n", SHRT_MAX);
	printf("Short Min: %d\n", SHRT_MIN);
	printf("Unsigned Short Max: %d\n", USHRT_MAX);
	printf("\n");
	
	printf("===================== LONG ======================\n");
	printf("Long Max: %d\n", LONG_MAX);
	printf("Long Min: %d\n", LONG_MIN);
	printf("Unsigned Long Max: %d\n", ULONG_MAX);
	printf("\n");

	return 0;
}