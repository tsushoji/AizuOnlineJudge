#include "5.h"

void mergeInversionCount(int numAry[], int left, int mid, int right, long *counter);
void mergeSortSolveInversionCount(int numAry[], int left, int right, long *counter);

void theNumberOfInversions(void)
{
	int count, left, right;
	long counter = 0;
	int numAry[MERGE_SORT_INVERSION_COUNT_ARY_SIZE];
	int i;
	scanf("%d", &count);
	for (i = 0; i < count - 1; i++) {
		scanf("%d ", &numAry[i]);
	}
	scanf("%d", &numAry[count - 1]);
	left = 0;
	right = count;
	mergeSortSolveInversionCount(numAry, left, right, &counter);
	printf("%ld\n", counter);
}

void mergeInversionCount(int numAry[], int left, int mid, int right, long *counter) {
	int i, j, k;
	int n = mid - left;
	int m = right - mid;
	int leftAry[MERGE_SORT_INVERSION_COUNT_ARY_SIZE / 2 + 1], rightAry[MERGE_SORT_INVERSION_COUNT_ARY_SIZE / 2 + 1];
	for (i = 0; i < n; i++) {
		leftAry[i] = numAry[left + i];
	}
	for (i = 0; i < m; i++) {
		rightAry[i] = numAry[mid + i];
	}
	leftAry[n] = rightAry[m] = 1000000010;
	i = 0, j = 0;
	for (k = left; k < right; k++) {
		if (leftAry[i] <= rightAry[j]) {
			numAry[k] = leftAry[i];
			i++;
		}
		else {
			numAry[k] = rightAry[j];
			*counter += n - i;
			j++;
		}
	}
}

void mergeSortSolveInversionCount(int numAry[], int left, int right, long *counter) {
	int mid;
	if (right - left > 1) {
		mid = (right + left) / 2;
		mergeSortSolveInversionCount(numAry, left, mid, counter);
		mergeSortSolveInversionCount(numAry, mid, right, counter);
		mergeInversionCount(numAry, left, mid, right, counter);
	}
}