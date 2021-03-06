#include <stdio.h>

/**
 * [swap description] swap two number
 * @param a [description] pointer points to a number
 * @param b [description] pointer ponint to another number
 */
extern void swap(int *a, int *b);
/**
 * [findMaxElement description] find element with maximum value in an array of numbers
 * @param  array [description] input array of numbers
 * @param  arrayLength [description] length of the input array (number of elements)
 * @return       [description] max element with the maximum value
 */
extern int findMaxElement(int array[], int arrayLength);
/**
 * [findMinElement description] find element with minimum value in an array of numbers
 * @param  array       [description] input array of numbers
 * @param  arrayLength [description] length of the input array (number of elements)
 * @return             [description] min element with the minumum value
 */
extern int findMinElement(int array[], int arrayLength);
/**
 * [getLength description] get number of elements of an array
 * @param  array [description] input array of numbers
 * @return       [description] length
 */
extern int getLength(int array[]);