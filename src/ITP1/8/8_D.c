#include "8.h"

void strLibExercize(void)
{
	char ch[RING_CHARACTER_ARY_SIZE];
	char ch2[COMP_RING_CHARACTER_ARY_SIZE];
	char compCh[COMP_RING_CHARACTER_ARY_SIZE];
	scanf("%s", &ch);
	scanf("%s", &compCh);
	strcpy(ch2, ch);
	strcat(ch, ch2);
	if (strstr(ch, compCh) != NULL) {
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}
}