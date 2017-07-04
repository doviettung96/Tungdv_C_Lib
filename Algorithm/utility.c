#include <stdio.h>
#include "utility.h"

void swap(int *a, int *b){
	int temp = *a; // temporary number, hold value of *a
	*a = *b;
	*b = temp;
}

int findMinElement(int array[], int start, int stop){
	int min = array[start];
	int minIndex = start;
	for(int elementIndex = start; elementIndex < stop; ++elementIndex){
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