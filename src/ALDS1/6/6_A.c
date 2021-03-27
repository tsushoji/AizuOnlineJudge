#include "6.h"

void countingSort(void)
{
    int A[COUNTING_SORT_ARY_SIZE], B[COUNTING_SORT_ARY_SIZE], C[COUNTING_SORT_UP_NUM] = { 0 };
	int n, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &A[i]);
		C[A[i]]++;
	}
	for (i = 1; i < COUNTING_SORT_UP_NUM; i++) {
		C[i] += C[i - 1];
	}
	for (i = n - 1; i >= 0; i--) {
		B[C[A[i]] - 1] = A[i];
		C[A[i]]--;
	}
	for (i = 0; i < n - 1; i++) {
		printf("%d ", B[i]);
	}
	printf("%d\n", B[n - 1]);
}