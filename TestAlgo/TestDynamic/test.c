#include <Algorithm/dynamic-programming.h>
#include <stdio.h>
#include <stdlib.h>

void main(){
	int *factorialArr = calFactorialArr();
	// for(int i = 2; i < MAX_TEST; ++i){
	// 	printf("Number of %d-digits perfect sequence: %d\n", i, countPerfectSequence(factorialArr, i));
	// }
	for(int i = 0; i < 10; ++i){
		printf("%d\n", factorialArr[i]);
	}
	free(factorialArr);
}
