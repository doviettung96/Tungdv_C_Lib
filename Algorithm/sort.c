#include <stdio.h>
#include "sort.h"

void selectionSort(int array[], int length){
	int minIndex;
	for(int elementIndex = 0; elementIndex < length; ++elementIndex){
		minIndex = findMinElement(array, elementIndex, length);
		swap(&array[elementIndex], &array[minIndex]);
	}
}

void insertionSort(int array[], int length){
	int currentElement;
	for(int currentIndex = 1; currentIndex < length; ++currentIndex){
		int offset = 0;
		currentElement = array[currentIndex];

		// calculate the offset = how long the sub-array shifted is
		for(int reverseIndex = currentIndex - 1; reverseIndex >= 0; --reverseIndex){
			if(currentElement < array[reverseIndex]){
				offset++;
			}else{
				break;
			}
		}

		for(int swapIndex = currentIndex; swapIndex > currentIndex - offset; --swapIndex){
			swap(&array[swapIndex], &array[swapIndex - 1]);
		}
	}
}

void bubbleSort(int array[], int length){
	for(int i = 0; i < length - 1 ; ++i){
		for(int j = i; j < length; ++j){
			if(array[j + 1] < array[j])
				swap(&array[j + 1], &array[j]);
		}
	}
}

void quickSort(int array[], int length){
	
}