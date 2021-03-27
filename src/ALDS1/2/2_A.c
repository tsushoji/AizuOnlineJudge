#include "2.h"

void bubbleSort(void)
{
	int count;
	int num[BUBBLE_SORT_ARY_SIZE];
	int k;
	int tmpNum;
	int counter = 0;
	scanf("%d", &count);
	for (int i = 0; i < count; i++) {
		scanf("%d", &num[i]);
	}
	for (int j = 0; j < count; j++) {
		for (k = count - 1; k > j; k--) {
			if (num[k] < num[k-1]) {
				tmpNum = num[k - 1];
				num[k - 1] = num[k];
				num[k] = tmpNum;
				counter++;
			}
		}
	}
	for (int l = 0; l < count - 1; l++) {
		printf("%d ", num[l]);
	}
	printf("%d\n", num[count - 1]);
	printf("%d\n", counter);
}