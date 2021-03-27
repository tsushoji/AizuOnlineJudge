#include "1.h"

void maximumProfit(void)
{
	int count;
	int q;
	int num;
	int diff;
	scanf("%d", &count);
	scanf("%d", &num);
	int minNum = num;
	scanf("%d", &num);
	int maxDiff = num - minNum;
	if (minNum > num) {
		minNum = num;
	}
	for (int i = 2; i < count; i++) {
		scanf("%d", &num);
		if (maxDiff < num - minNum) {
			maxDiff = num - minNum;
		}
		if (minNum > num) {
			minNum = num;
		}
	}
	printf("%d\n", maxDiff);
}