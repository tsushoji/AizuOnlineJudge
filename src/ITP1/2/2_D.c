#include "2.h"

void judgeInequalitySign(void) {
	int w;
	int h;
	int x;
	int y;
	int r;
	bool x_flag = false;
	bool y_flag = false;
	scanf("%d %d %d %d %d", &w, &h, &x, &y, &r);
	if (x + r > 0) {
		if (x + r <= w) {
			x_flag = true;
		}
	}
	if (y + r > 0) {
		if (y + r <= h) {
			y_flag = true;
		}
	}
	if (x_flag && y_flag) {
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}
}