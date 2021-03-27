#include "5.h"

void merge(int numAry[], int left, int mid, int right, int *counter);
void mergeSortSolve(int numAry[], int left, int right, int *counter);

void mergeSort(void)
{
	int count, left, right, counter = 0;
	int numAry[MERGE_SORT_ARY_SIZE];
	int i;
	scanf("%d", &count);
	for (i = 0; i < count - 1; i++) {
		scanf("%d ", &numAry[i]);
	}
	scanf("%d", &numAry[count - 1]);
	left = 0;
	right = count;
	mergeSortSolve(numAry, left, right, &counter);
	for (i = 0; i < count - 1; i++) {
		printf("%d ", numAry[i]);
	}
	printf("%d\n", numAry[count - 1]);
	printf("%d\n", counter);
}

void merge(int numAry[], int left, int mid, int right, int *counter) {
	int i, j, k;
	int n = mid - left;
	int m = right - mid;
	int leftAry[MERGE_SORT_ARY_SIZE / 2 + 1], rightAry[MERGE_SORT_ARY_SIZE / 2 + 1];
	for (i = 0; i < n; i++) {
		leftAry[i] = numAry[left + i];
	}
	for (i = 0; i < m; i++) {
		rightAry[i] = numAry[mid + i];
	}
	leftAry[n] = rightAry[m] = 2000000000;
	i = 0, j = 0;
	for (k = left; k < right; k++) {
		if (leftAry[i] <= rightAry[j] && i < n) {
			numAry[k] = leftAry[i];
			i++;
		}
		else {
			numAry[k] = rightAry[j];
			j++;
		}
		*counter += 1;
	}
}

void mergeSortSolve(int numAry[], int left, int right, int *counter) {
	int mid;
	if (right - left > 1) {
		mid = (right + left) / 2;
		mergeSortSolve(numAry, left, mid, counter);
		mergeSortSolve(numAry, mid, right, counter);
		merge(numAry, left, mid, right, counter);
	}
}