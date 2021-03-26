#include "8.h"

void numInputSumDisplay(void)
{
	char ch[SUM_NUMBERS_ARY_SIZE];
	int sum;
	while (true) {
		scanf("%s", ch);
		if (ch[0] == '0') {
			break;
		}
		sum = 0;
		for (int i = 0; i < strlen(ch); i++) {
			if (isdigit(ch[i])) {
				sum += ch[i] - '0';
			}
		}
		printf("%d\n", sum);
	}
}