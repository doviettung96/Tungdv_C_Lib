#include <Algorithm/sort.h>
#include <stdio.h>

void main(){
	int a[9] = {1, 5, 3, 2, 4, 6, 9, 7, 8};
	int length = sizeof(a) / sizeof(a[0]);
	// selectionSort(a, length);
	// insertionSort(a, length);
	// bubbleSort(a, length);
	// quickSort(a, 0, length - 1);
	heapSort(a, length);
	for(int i = 0; i < length; ++i){
		printf("%d ", a[i]);
	}
	printf("\n");
}
