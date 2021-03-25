#include "4.h"

void calculationDisplay(void)
{
	int a;
	int b;
	char op;

	while (true) {
		scanf("%d %c %d", &a, &op, &b);
		if (op == QUESTION_CHARACTER) {
			break;
		}
		int calNum = 0;
		switch (op) {
			case PLUS_OPRATION:
				calNum = a + b;
				break;
			case MINUS_OPRATION:
				calNum = a - b;
				break;
			case MULTIPLY_OPRATION:
				calNum = a * b;
				break;
			case DIVIDE_OPRATION:
				calNum = a / b;
				break;
			default:
				break;
		}
		printf("%d\n", calNum);
	}
}