#include <stdio.h>


void swap(int *a, int *b){
	int temp = *a; // temporary number, hold value of *a
	*a = *b;
	*b = temp;
}

int findMaxElement(int array[], int arrayLength){
	int max = array[0];
	for(int elementIndex; elementIndex < arrayLength; ++elementIndex){
		if(array[elementIndex] > max) { 
		// if an element is bigger than max then assign max to its value
			max = array[elementIndex]; 
		}
	}
	return max;
}

int findMinElement(int array[], int arrayLength){
	int min = array[0];
	for(int elementIndex; elementIndex < arrayLength; ++elementIndex){
		if(array[elementIndex] < min) { 
		// if an element is bigger than max then assign max to its value
			min = array[elementIndex]; 
		}
	}
	return min;
}