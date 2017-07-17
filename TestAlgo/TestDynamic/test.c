#include <Algorithm/dynamic-programming.h>
#include <stdio.h>
#include <stdlib.h>

void main() {
	int maxN = 2 * MAX_TEST + 1;
	int maxK = MAX_TEST + 1;
	unsigned long **combinationArr = calCombinationArr(maxN, maxK);
	int n;
	scanf("%d", &n);
	printf("%ld\n", countPerfectSequence(combinationArr, n));
	for (int i = 0; i < maxN; ++i) {
		free(combinationArr[i]);
	}
	free(combinationArr);
}
