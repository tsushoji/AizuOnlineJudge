#include "7.h"

void threeDimensionsCount(void)
{
	int num;
	int sum;
	int p, q, r;
	int counter = 0;
	while (true) {
		scanf("%d %d", &num, &sum);
		if (num == 0 && sum == 0) {
			break;
		}
		for (p = 1; p <= num; p++) {
			for (q = p + 1; q <= num; q++) {
				for (r = q + 1; r <= num; r++) {
					if (p + q + r == sum) {
						counter++;
					}
				}
			}
		}
		printf("%d\n", counter);
	    counter = 0;
	}
}