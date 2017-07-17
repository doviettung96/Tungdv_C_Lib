#include "dynamic-programming.h"
#include <stdio.h>
#include <stdlib.h>


int* calFactorialArr() {
	int maxFactorial = MAX_TEST * 2;
	int *result = (int *)malloc(sizeof(int) * maxFactorial);
	*result = 1;

	for (int i = 1; i < maxFactorial; ++i) {
		*(result + i) = *(result + i - 1) * i;
	}

	return result;
}

// C k of n
int calCombination(int factorialArr[], int k, int n) {
	return factorialArr[n] / (factorialArr[k] * factorialArr[n - k]);
}

// perfect sequence of digits which has digit either in non-decreasing or non-increasing order
int countPerfectSequence(int factorialArr[], int n) {
	int combination = calCombination(factorialArr, n, 2 * n - 1);
	return 2 * combination - n;
}