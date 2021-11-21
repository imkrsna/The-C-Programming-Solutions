#include <stdio.h>

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
	high = n-1;
	mid = (high + low) / 2;
	while(low <= high && x != v[mid]){
		if(x < v[mid])
			high = mid - 1;
		else
			low = mid + 1;
		mid = (high + low) / 2;
	}
	if(x == v[mid])
		return mid;	/* found match */
	else
		return -1;	/* no match */
}

