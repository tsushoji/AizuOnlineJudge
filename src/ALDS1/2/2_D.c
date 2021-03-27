#include "2.h"

void shellSort(void)
{
	int counter = 0;
	int count;
	int num[SHELL_SORT_ARY_SIZE];
	int interval[SHELL_SORT_INTERVAL_ARY_SIZE];
	int intervalCount;
	int tmpNum;
	scanf("%d", &count);
	for (int i = 0; i < count; i++) {
		scanf("%d", &num[i]);
	}
	int j;
	interval[0] = 1;
	for (j = 0; 3 * interval[j] + 1 < count; j++) {
		interval[j + 1] = 3 * interval[j] + 1;
	}
	for (int r = 0; r < (j + 1) / 2; r++) {
		tmpNum = interval[j - r];
		interval[j - r] = interval[r];
		interval[r] = tmpNum;
	}
	int q;
	int maxNum;
	for (int l = 0; l < j + 1; l++) {
		for (int p = interval[l]; p < count; p++) {
			maxNum = num[p];
			q = p - interval[l];
			while (q >= 0 && num[q] > maxNum) {
				num[q + interval[l]] = num[q];
				q -= interval[l];
				counter++;
			}
			num[q + interval[l]] = maxNum;
		}
	}
	printf("%d\n", j + 1);
	for (int k = 0; k < j; k++) {
		printf("%d ", interval[k]);
	}
	printf("%d\n", interval[j]);
	printf("%d\n", counter);
	for (int m = 0; m < count; m++) {
		printf("%d\n", num[m]);
	}
}