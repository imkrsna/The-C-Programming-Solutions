#include <stdio.h>

// creating function prototype
int binarysearch(int x, int v[], int n);

int main(){
	int arr[6] = {1, 3, 5, 8, 14, 34};
	
	printf("pos: %d\n", binarysearch(5, arr, 6));
	printf("pos: %d\n", binarysearch(4, arr, 6));
	return 0;
}

int binarysearch(int x, int v[], int n){
	int low, mid, high;
	
	low = 0;
	high = n - 1;
	while(low <= high){
		mid = (low + high) / 2;
		if(x < v[mid])
			high = mid - 1;
		else if (x > v[mid])
			low = mid + 1;
		else	/* found match */
			return mid;
	}
	return -1; /* no match */
}