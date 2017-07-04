#include <Algorithm/sort.h>
#include <stdio.h>

void main(){
	int length = 5;
	int a[5] = {1, 5, 3, 2, 4};
	// selectionSort(a, length);
	// insertionSort(a, length);
	bubbleSort(a, length);
	for(int i = 0; i < length; ++i){
		printf("%d ", a[i]);
	}
	printf("\n");
}
