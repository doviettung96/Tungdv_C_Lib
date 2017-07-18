#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

// selection sort doesn't assign much, memory efficient
// only take much time to compare, find min
void selectionSort(int array[], int length) {
	int minIndex;
	for (int i = 0; i < length; ++i) {
		minIndex = findMinElement(array, i, length);
		swap(&array[i], &array[minIndex]);
	}
}

// doesn't take much time to compare, but much time for assign
// good when the array is nearly sorted
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

// fast if pivot is in middle O(nlogn)
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

void heapSort(int array[], int length) {
	for (int i = length / 2 - 1; i >= 0; --i)
		heapify(array, length, i); // call heapify from bottom to root to build a heap tree

	for (int i = length - 1; i >= 0; --i) {
		swap(&array[0], &array[i]); // move the root = largest to the end
		heapify(array, i, 0); // heapify the remaining heap tree
	}

}

void heapify(int array[], int length, int root) {
	int left = 2 * root + 1;
	int right = 2 * root + 2;
	int largest = root;

	if (left < length && array[left] > array[largest])
		largest = left;
	if (right < length && array[right] > array[largest])
		largest = right;
	if (largest != root) {
		swap(&array[largest], &array[root]);
		heapify(array, length , largest);
	}
}

void mergeSort(int array[], int left, int right) {
	if (left < right) {
		int middle = (right + left) / 2; // same as (left + right) / 2

		mergeSort(array, left, middle);
		mergeSort(array, middle + 1, right);

		merge(array, left, middle, right);
	}
}

void merge(int array[], int left, int middle, int right) {
	int firstLength = middle - left + 1;
	int secondLength = right - middle;

	int firstHalf[firstLength];
	int secondHalf[secondLength];
	int i, j, k;

	// copy data into temp array
	for (i = 0; i < firstLength; ++i)
		firstHalf[i] = array[left + i];

	for (j = 0; j < secondLength; ++j)
		secondHalf[j] = array[middle + j + 1];

	// start to merge
	i = j = 0;
	k = left; // index of merged subarray = result array
	while (i < firstLength && j < secondLength) {
		if (firstHalf[i] <= secondHalf[j]) {
			array[k] = firstHalf[i];
			++i;
		} else {
			array[k] = secondHalf[j];
			++j;
		}
		++k;
	}

	// if any elements left in first half, copy it to result array
	while (i < firstLength) {
		array[k] = firstHalf[i];
		++i;
		++k;
	}
	// then the second half
	while (j < secondLength) {
		array[k] = secondHalf[j];
		++j;
		++k;
	}
}