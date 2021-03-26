#include "3.h"
#include "./../../common.h"

void maxNumDisplay(void)
{
	int x = 0;
	int y = 0;

	while (scanf("%d %d", &x, &y) != EOF) {
		if (x == 0 && y == 0) {
			break;
		}
		int intAry[] = { x, y };
		int intNumMax = getValMax(intAry, 2);
		if (x == intNumMax) {
			x = y;
			y = intNumMax;
		}
		printf("%d %d\n", x, y);
	}
}