#include <stdio.h>
#include <../Utility/utility.h>

void selectionSort(int array[], int length){
	int min;
	for(int elementIndex; elementIndex < length; ++elementIndex){
		min = findMinElement(array, length - elementIndex);
		swap(&array[elementIndex], &min);
	}
}
