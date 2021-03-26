#include "9.h"

void twoStudentsScoreDisplay(void)
{
	int TaroScore = 0;
	int HnakoScore = 0;
	int count;
	scanf("%d", &count);
	while (count--) {
		char TaroChar[100];
		char HanakoChar[100];
		scanf("%s %s", &TaroChar, &HanakoChar);
		if (strcmp(TaroChar, HanakoChar) == 0) {
			TaroScore += 1;
			HnakoScore += 1;
		}
		else if (strcmp(TaroChar, HanakoChar) > 0) {
			TaroScore += 3;
		}
		else if (strcmp(TaroChar, HanakoChar) < 0) {
			HnakoScore += 3;
		}
	}
	printf("%d %d\n", TaroScore, HnakoScore);
}