#include "utility.h"


/**
 * [selectionSort description] sort an array of numbers in increasing order
 * @param array  [description] input array of numbers
 * @param length [description] number of elements in the input array
 */
void selectionSort(int array[], int length);
/**
 * [insertionSort description] sort an array of numbers using insertion sort
 * @param array  [description] input array of numbers
 * @param length [description] number of elements in the input array
 */
void insertionSort(int array[], int length);
/**
 * [bubbleSort description]    sort an array of numbers using bubble sort
 * @param array  [description] input array of numbers
 * @param length [description] number of elements in the input array
 */
void bubbleSort(int array[], int length);
/**
 * [quickSort description]     sort an array of numbers using quick sort
 * @param array [description]  input array of numbers 
 * @param low   [description]  lowest index in an array 
 * @param high  [description]  highest index in an array
 */
void quickSort(int array[], int low, int high);
/**
 * [partition description]      
 * @param  array [description] 
 * @param  low   [description]
 * @param  high  [description]
 * @return       [description]
 */
int partition(int array[], int low, int high);
/**
 * [heapify description]       heapify from a root index to all of its children
 * @param array  [description]
 * @param length [description]
 * @param root   [description]
 */
void heapify(int array[], int length, int root);
/**
 * [heapSort description]      sort an array using heap sort 
 * @param array  [description]
 * @param length [description]
 */
void heapSort(int array[], int length);
/**
 * [merge description]         divide 1 array into 2 halves and compare then merge them together 
 * @param array  [description]
 * @param left   [description]
 * @param middle [description]
 * @param right  [description]
 */
void merge(int array[], int left, int middle, int right);
/**
 * [mergeSort description]     sort an array 
 * @param array [description]
 * @param left  [description]
 * @param right [description]
 */
void mergeSort(int array[], int left, int right);