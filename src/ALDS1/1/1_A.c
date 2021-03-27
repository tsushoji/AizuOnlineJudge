#include "1.h"

void insertionSort(void)
{
	int count;
	int numAry[INSERTION_SORT_ARY_SIZE];
	int num, k;
	scanf("%d", &count);
	for (int i = 0; i < count; i++) {
		scanf("%d", &numAry[i]);
	}
	for (int i = 0; i < count - 1; i++) {
			printf("%d ", numAry[i]);
		}
		printf("%d\n", numAry[count - 1]);
	for (int j = 1; j <= count - 1; j++) {
		num = numAry[j];
		k = j - 1;
		while (k >= 0 && numAry[k] > num) {
			numAry[k + 1] = numAry[k];
			k--;
		}
		numAry[k + 1] = num;
		for (int i = 0; i < count - 1; i++) {
			printf("%d ", numAry[i]);
		}
		printf("%d\n", numAry[count - 1]);
	}
}