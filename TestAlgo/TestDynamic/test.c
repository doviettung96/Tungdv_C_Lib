#include <Algorithm/dynamic-programming.h>
#include <stdio.h>
#include <stdlib.h>

void main(){
	int maxN = 2 * MAX_TEST + 1;
	int maxK = MAX_TEST + 1;
	long long **combinationArr = calCombinationArr(maxN, maxK);
	
	// for(int i = 0; i < maxN; ++i){
	// 	for(int j = 0; j < maxK; ++j){
	// 		printf("%lld\n", combinationArr[i][j]);
	// 	}
	// }
	// for(int i = 2; i < MAX_TEST; ++i){
	// 	printf("Number of %d-digits perfect sequence: %lld\n", i, countPerfectSequence(combinationArr, i));
	// }
	for(int i = 0; i < maxN; ++i){
		free(combinationArr[i]);
	}
	free(combinationArr);
}
