#include "5.h"

void forTwoDimensionsEnclosure(void)
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
				if (p == h - 1 || q == w - 1 || p == 0 || q == 0) {
					printf("#");
				}
				else {
					printf(".");
				}
			}
			printf("\n");
		}
		printf("\n");
	}
}