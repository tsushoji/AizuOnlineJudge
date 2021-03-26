#include "8.h"

void alphabetOrderNumSumDisplay(void)
{
	char ch;
	int num;
	int counter[COUNT_ALPHA_ARY_SIZE] = {0};
	while (scanf("%c", &ch) != EOF) {
		if (isupper(ch)) {
			num = ch - 'A';
			counter[num]++;
		}
		else if (islower(ch)) {
			num = ch - 'a';
			counter[num]++;
		}
		else {
		}
	}
	for (int i = 0; i < COUNT_ALPHA_ARY_SIZE; i++) {
		printf("%c : %d\n", i + 'a', counter[i]);
	}
}