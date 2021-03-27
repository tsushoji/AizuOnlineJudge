#include "5.h"

bool exhaustiveSearchSolve(int pos, int cmpNum, int numAry[], int count);

void exhaustiveSerach(void)
{
	int count, cmpCount;
	int numAry[EXHAUSTIVE_SEARCH_ARY_SIZE];
	int cmpNum;
	int i;
	scanf("%d", &count);
	for (i = 0; i < count; i++) {
		scanf("%d", &numAry[i]);
	}
	scanf("%d", &cmpCount);
	for (i = 0; i < cmpCount; i++) {
		scanf("%d", &cmpNum);
		if (exhaustiveSearchSolve(0, cmpNum, numAry, count)) {
			printf("yes\n");
		}
		else {
			printf("no\n");
		}
	}
}

bool exhaustiveSearchSolve(int pos, int cmpNum, int numAry[], int count) {
	bool ans;
	if (cmpNum == 0) {
		return true;
	}
	if (pos >= count) {
		return false;
	}
	ans = exhaustiveSearchSolve(pos + 1, cmpNum, numAry, count) || exhaustiveSearchSolve(pos + 1, cmpNum - numAry[pos], numAry, count);
	return ans;
}