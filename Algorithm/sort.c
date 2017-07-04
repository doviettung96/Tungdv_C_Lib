#include <stdio.h>
#include "sort.h"

void selectionSort(int array[], int length){
	int minIndex;
	for(int elementIndex = 0; elementIndex < length; ++elementIndex){
		minIndex = findMinElement(array, elementIndex, length);
		swap(&array[elementIndex], &array[minIndex]);
	}
}
