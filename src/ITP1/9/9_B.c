#include "9.h"

void shuffleCharResultDisplay(void)
{
	char ch[SHUFFLE_CHARACTER_ARY_SIZE];
	int count;
	int num;
	int l;
	char resultCh[RESULT_SHUFFLE_CHARACTER_ARY_SIZE];
	while (1) {
		scanf("%s", ch);
		if (strcmp(ch, "-") == 0) {
			break;
		}
		l = strlen(ch);
		scanf("%d", &count);
		while (count--) {
			scanf("%d", &num);
			for (int i = 0; i < l; i++) {
				resultCh[i] = ch[(i + num) % l];
			}
			resultCh[l] = '\0';
			strcpy(ch, resultCh);
		}
		printf("%s\n", resultCh);
	}
}