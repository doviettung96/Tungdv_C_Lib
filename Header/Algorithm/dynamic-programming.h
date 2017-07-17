#define MAX_TEST 10000
#define MAX_MOD 1000000007

typedef long long element_type;

element_type** calCombinationArr(int maxN, int maxK);
element_type findCombination(element_type **combinationArr, int k, int n);
element_type countPerfectSequence(element_type **combinationArr, int n);
element_type min(element_type a, element_type b);