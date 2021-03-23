#include "3.h"

void whileLoopDisplay(void) {
	int x = 0;
	int i = 1;
	while (1) {
		scanf("%d", &x);
		if (x == 0) {
			break;
		}
		printf("Case %d: %d\n", i, x);
		i++;
	}
}