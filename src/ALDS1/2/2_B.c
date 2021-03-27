#include "2.h"

void selectionSort(void)
{
	int count;
	int num[SELECTION_SORT_ARY_SIZE];
	int minNumIndex;
	int minNum;
	int tmpNum;
	int k;
	int counter = 0;
	scanf("%d", &count);
	for (int i = 0; i < count; i++) {
		scanf("%d", &num[i]);
	}
	for (int j = 0; j < count; j++) {
		minNumIndex = j;
		for (k = j + 1; k < count; k++) {
			if (num[k] < num[minNumIndex]) {
				minNumIndex = k;
			}
		}
		if (num[j] > num[minNumIndex]) {
			tmpNum = num[j];
			num[j] = num[minNumIndex];
			num[minNumIndex] = tmpNum;
			counter++;
		}
	}
	for (int l = 0; l < count - 1; l++) {
		printf("%d ", num[l]);
	}
	printf("%d\n", num[count - 1]);
	printf("%d\n", counter);
}