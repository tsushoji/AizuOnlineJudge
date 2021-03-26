#include "9.h"

void equalCountDisplay(void)
{
	char ch[FINDING_WORD_CHARACTER_ARY_SIZE];
	char compCh[COMP_FINDING_WORD_CHARACTER_ARY_SIZE];
	int counter = 0;
	scanf("%s", compCh);
	while (1) {
		scanf("%s", ch);
		if (strcmp(ch, FINDING_WORD_END_CHARACTER) == 0) {
			break;
		}
		for (int i = 0; ch[i] != '\0'; i++) {
			ch[i] = tolower(ch[i]);
		}
		if (!strcmp(ch, compCh)) {
			counter++;
		}
	}
	printf("%d\n", counter);
}