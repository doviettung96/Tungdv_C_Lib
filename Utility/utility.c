#include "utility.h"

void swap(int *a, int *b){
	int temp = *a; // temporary number, hold value of *a
	*a = *b;
	*b = temp;
}

int findMaxElement(int array[], int arrayLength){
	int max = array[0];
	int maxIndex = 0;
	for(int elementIndex; elementIndex < arrayLength; ++elementIndex){
		if(array[elementIndex] > max) { 
		// if an element is bigger than max then assign max to its value
			max = array[elementIndex];
			maxIndex = elementIndex; 
		}
	}
	return maxIndex;
}

int findMinElement(int array[], int arrayLength){
	int min = array[0];
	int minIndex = 0;
	for(int elementIndex; elementIndex < arrayLength; ++elementIndex){
		if(array[elementIndex] < min) { 
		// if an element is bigger than max then assign max to its value
			min = array[elementIndex];
			minIndex = elementIndex; 
		}
	}
	return minIndex;
}

int getLength(int array[]){
	int index = 0;
	while(&array[index] != NULL){
		index++;
	}
	return index;
}