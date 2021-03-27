#include "1.h"

void primeNumbers(void)
{
	int count;
	int x;
	int counter = 0;
	int i;
	double root;
	bool canPrimeFlg;
	scanf("%d", &count);
	while (count--) {
		scanf("%d", &x);
		if (x == 2) {
			counter++;
			continue;
		}
		if (x < 2 || x % 2 == 0) {
			continue;
		}
		i = 3;
		root = sqrt(x);
		canPrimeFlg = true;
		while (i <= root) {
			if (x % i == 0) {
				canPrimeFlg = false;
				break;
			}
			i += 2;
		}
		if (canPrimeFlg) {
			counter++;
		}
	}
	printf("%d\n", counter);
}