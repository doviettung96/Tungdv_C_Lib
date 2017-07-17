#include "dynamic-programming.h"
#include <stdio.h>
#include <stdlib.h>


element_type** calCombinationArr(int maxN, int maxK) {
	int i, j;
	element_type **combinationArr = (element_type **)malloc(sizeof(element_type *) * maxN);
	for (i = 0; i < maxN; ++i) {
		combinationArr[i] = (element_type *)malloc(sizeof(element_type) * maxK);
		for (j = 0; j <= min(i, maxK - 1); ++j) {
			if (j == 0 || j == i)
				combinationArr[i][j] = 1;
			else {
				combinationArr[i][j] = combinationArr[i - 1][j - 1] + combinationArr[i - 1][j];
			}
		}
	}
	return combinationArr;
}

// C k of n
element_type findCombination(element_type **combinationArr, int k, int n) {
	return combinationArr[n][k];
}

// perfect sequence of digits which has digit either in non-decreasing or non-increasing order
element_type countPerfectSequence(element_type **combinationArr, int n) {
	int combination = findCombination(combinationArr, n, 2 * n - 1);
	return (2 * combination - n) % MAX_MOD;
}

int min(int a, int b) {
	return (a < b) ? a : b;
}