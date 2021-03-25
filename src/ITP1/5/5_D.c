#include "5.h"

void call(int n);

void breakAndContinueExercise(void)
{
    int n;
    scanf("%d", &n);
	call(n);
}

void call(int n)
{
	int i = 0;
	while (++i <= n) {
		int x = i;
		if (x % 3 == 0) {
			printf(" %d", i);
			continue;
		}
		do {
			if (x % 10 == 3) {
				printf(" %d", i);
				break;
			}
			x /= 10;
		} while (x);
	}
	printf("\n");
}