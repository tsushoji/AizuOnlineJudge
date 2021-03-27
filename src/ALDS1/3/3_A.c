#include "3.h"

void stack(void)
{
	char ch[INPUT_STACK_ARY_SIZE];
	int num[OUTPUT_STACK_ARY_SIZE];
	int intNum;
	int nowIndex = -1;
	while (scanf("%s", ch) != EOF) {

		if (ch[0] == '+') {
			intNum = (num[nowIndex - 1]) + (num[nowIndex]);
			nowIndex -= 1;
			num[nowIndex] = intNum;
		}
		else if (ch[0] == '-') {
			intNum = (num[nowIndex - 1]) - (num[nowIndex]);
			nowIndex -= 1;
			num[nowIndex] = intNum;
		}
		else if (ch[0] == '*') {
			intNum = (num[nowIndex - 1]) * (num[nowIndex]);
			nowIndex -= 1;
			num[nowIndex] = intNum;
		}
		else if(isdigit(ch[0])) {
			nowIndex++;
			num[nowIndex] = atoi(ch);
		}
		else {
		}
	}
	printf("%d\n", num[nowIndex]);
}