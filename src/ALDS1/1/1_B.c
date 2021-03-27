#include "1.h"

void greatestCommonDivisor(void)
{
	int x;
	int y;
	int r;
	int tmpNum;
	int maxD;
	scanf("%d %d", &x, &y);
	if (y > x) {
		tmpNum = y;
		y = x;
		x = tmpNum;
	}
	while (y > 0) {
		r = x % y;
		x = y;
		y = r;
	}
	printf("%d\n", x);
}