#include <stdio.h>
#include "sort.h"

void selectionSort(int array[], int length) {
	int minIndex;
	for (int i = 0; i < length; ++i) {
		minIndex = findMinElement(array, i, length);
		swap(&array[i], &array[minIndex]);
	}
}

void insertionSort(int array[], int length) {
	int currentElement;
	int i, j;
	for (i = 1; i < length; ++i) {
		currentElement = array[i];
		j = i - 1;

		while (j >= 0 && array[j] > currentElement) {
			array[j + 1] = array[j];
			--j;
		}
		array[j + 1] = currentElement;
	}
}

void bubbleSort(int array[], int length) {
	for (int i = 0; i < length - 1 ; ++i) {
		for (int j = i; j < length; ++j) {
			if (array[j + 1] < array[j])
				swap(&array[j + 1], &array[j]);
		}
	}
}

void quickSort(int array[], int low, int high) {
	if (low < high) {
		int pivot = partition(array, low, high);
		quickSort(array, low, pivot - 1);
		quickSort(array, pivot + 1, high);
	}
}

int partition(int array[], int low, int high) {
	int pivot = array[high];
	int j = low;
	for (int i = low; i < high; ++i) {
		if (array[i] <= pivot) {
			if (i != j)
				swap(&array[i], &array[j]); // no need to swap duplicate
			++j;
		}
	}
	swap(&array[high], &array[j]);
	return j;
}