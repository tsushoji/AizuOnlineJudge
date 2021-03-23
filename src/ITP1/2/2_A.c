#include "2.h"

void judgeIf(void) {
	int x;
	int y;
	scanf("%d %d", &x, &y);
	if (-1000 > x || x > 1000 || -1000 > y || y > 1000) {
		return;
	}
	if (x == y) {
		printf("a == b\n");
	}
	else if(x < y){
		printf("a < b\n");
	}
	else {
		printf("a > b\n");
	}
}