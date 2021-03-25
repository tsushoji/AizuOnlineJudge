#include "5.h"

void forTwoDimensions(void)
{
	int h;
	int w;
	while (true) {
		scanf("%d %d", &h, &w);
		if (h == 0 && w == 0) {
			break;
		}
		for (int p = 0; p < h; p++) {
			for (int q = 0; q < w; q++) {
				printf("#");
			}
			printf("\n");
		}
		printf("\n");
	}
}