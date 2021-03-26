#include "11.h"

void fourOperationDiceGame(void)
{
	int dice[FIRST_DICE_ARY_SIZE];
	char op;
	int sum;
	int tmpFirstDiceNum;
	int tmpSecondDiceNum;
	for (int i = 0; i < 6; i++) {
		scanf("%d\n", &dice[i]);
	}
	int xDice[FIRST_DICE_X_ARY_SIZE] = { 4, 1, 3 };
	int yDice[FIRST_DICE_Y_ARY_SIZE] = { 5, 1, 2 };
	while (1) {
		scanf("%c", &op);
		if (op == '\n') {
			break;
		}
		sum = 0;
		switch (op) {
			case 'N':
				tmpFirstDiceNum = yDice[1];
				tmpSecondDiceNum = yDice[2];
				sum = tmpSecondDiceNum + xDice[0] + xDice[2];
				yDice[2] = sum - (tmpFirstDiceNum + tmpSecondDiceNum);
				yDice[0] = tmpFirstDiceNum;
				yDice[1] = tmpSecondDiceNum;
				xDice[1] = tmpSecondDiceNum;
				break;

			case 'S':
				tmpFirstDiceNum = yDice[0];
				tmpSecondDiceNum = yDice[1];
				sum = tmpFirstDiceNum + xDice[0] + xDice[2];
				yDice[0] = sum - (tmpFirstDiceNum + tmpSecondDiceNum);
				yDice[1] = tmpFirstDiceNum;
				yDice[2] = tmpSecondDiceNum;
				xDice[1] = tmpFirstDiceNum;
				break;

			case 'E':
				tmpFirstDiceNum = xDice[0];
				tmpSecondDiceNum = xDice[1];
				sum = tmpFirstDiceNum + yDice[0] + yDice[2];
				xDice[0] = sum - (tmpFirstDiceNum + tmpSecondDiceNum);
				xDice[1] = tmpFirstDiceNum;
				xDice[2] = tmpSecondDiceNum;
				yDice[1] = tmpFirstDiceNum;
				break;

			case 'W':
				tmpFirstDiceNum = xDice[1];
				tmpSecondDiceNum = xDice[2];
				sum = tmpSecondDiceNum + yDice[0] + yDice[2];
				xDice[2] = sum - (tmpFirstDiceNum + tmpSecondDiceNum);
				xDice[0] = tmpFirstDiceNum;
				xDice[1] = tmpSecondDiceNum;
				yDice[1] = tmpSecondDiceNum;
				break;

			default:
				break;
		}
	}
	printf("%d\n", dice[yDice[1] - 1]);
}