#include "11.h"
#include "../../common.h"

void judgeFirstSameDice(void)
{
	Dice firstDice, secondDice;
	int k;
	int tmpDice;
	int tmpSecondDice;
	char op;
	int tmpfirstDice;
	int tmpsecondDice;
	for (int i = 0; i < 6; i++) {
		scanf("%d", &firstDice.face[i]);
	}
	for (int j = 0; j < 6; j++) {
		scanf("%d", &secondDice.face[j]);
	}
	for (int l = 0; l < strlen(THIRD_DICE_ORDER); l++) {
		if (firstDice.face[0] == secondDice.face[0]) {
			for (int m = 0; m < 4; m++) {
				if (firstDice.face[1] != secondDice.face[1]) {
					tmpfirstDice = secondDice.face[1];
					tmpsecondDice = secondDice.face[3];
					secondDice.face[1] = secondDice.face[2];
					secondDice.face[2] = secondDice.face[4];
					secondDice.face[3] = tmpfirstDice;
					secondDice.face[4] = tmpsecondDice;
				}
				else {
					break;
				}
			}
		}
		for (k = 0; k < 6; k++) {
			if (firstDice.face[k] != secondDice.face[k]) {
				break;
			}
		}
		if (k == 6) {
			printf("Yes\n");
		}
		op = THIRD_DICE_ORDER[l];
		setDice(&secondDice, op);	
	}
	printf("No\n");
}

void setDice(Dice *pDice, char op)
{
	int tmpFirstDiceNum;
	int tmpSecondDiceNum;
	int tDice[DICE_ARY_SIZE];
	for (int i = 0; i < 6; i++) {
		tDice[i] = pDice -> face[i];
	}
	int xDice[FIRST_DICE_X_ARY_SIZE] = { 4, 1, 3 };
	int yDice[FIRST_DICE_Y_ARY_SIZE] = { 5, 1, 2 };
	int sum = 0;
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

		case 'E':
			tmpFirstDiceNum = xDice[0];
			tmpSecondDiceNum = xDice[1];
			sum = tmpFirstDiceNum + yDice[0] + yDice[2];
			xDice[0] = sum - (tmpFirstDiceNum + tmpSecondDiceNum);
			xDice[1] = tmpFirstDiceNum;
			xDice[2] = tmpSecondDiceNum;
			yDice[1] = tmpFirstDiceNum;
			break;
	}		
	pDice-> face[0] = tDice[yDice[1] - 1];
	pDice->face[1] = tDice[yDice[2] - 1];
	pDice->face[2] = tDice[xDice[2] - 1];
	pDice->face[3] = tDice[xDice[0] - 1];
	pDice->face[4] = tDice[yDice[0] - 1];
	pDice->face[5] = tDice[7 - yDice[1] - 1];
}
