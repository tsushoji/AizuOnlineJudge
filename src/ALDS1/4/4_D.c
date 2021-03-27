#include "4.h"

void allocation(void)
{
	int count;
	int trackCount;
	int carryCount[ALLOCATION_ARY_SIZE];
	int left = 0;
	int right = ALLOCATION_INIT_RIGHT_NUM;
	int mid;
	int sum;
	int index;
	int tmpCount;
	bool canCarryFlg;
	scanf("%d %d", &count, &trackCount);
	for (int i = 0; i < count; i++) {
		scanf("%d", &carryCount[i]);
	}
	while (right > left + 1) {
		mid = (right + left) / 2;
		canCarryFlg = false;
		index = 0;
		for (int j = 0; j < trackCount; j++) {
			sum = 0;
			while (sum + carryCount[index] <= mid) {
				sum += carryCount[index];
				index++;
				if (index == count) {
					canCarryFlg = true;
					break;
				}
			}
			if (canCarryFlg) {
				break;
			}
		}
		if (canCarryFlg) {
			right = mid;
		}
		else{
			left = mid;
		}
	}
	printf("%d\n", right);
}