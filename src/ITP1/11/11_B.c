#include "11.h"

void rightDiceNumDisplay(void)
{
	int dice[DICE_ARY_SIZE];
	int count;
	int topDice;
	int frontDice;
	int topNum;
	int frontNum;
	for (int i = 0; i < 6; i++) {
		scanf("%d", &dice[i]);
	}
	scanf("%d", &count);
	while (count--) {
		scanf("%d %d", &topDice, &frontDice);
		for (int i = 0; i < 6; i++) {
			if (dice[i] == topDice) {
				topNum = i + 1;
			}
			if (dice[i] == frontDice) {
				frontNum = i + 1;
			}
		}
		if (topNum == 1 && frontNum == 2)printf("%d\n", dice[2]);
		if (topNum == 1 && frontNum == 3)printf("%d\n", dice[4]);
		if (topNum == 1 && frontNum == 4)printf("%d\n", dice[1]);
		if (topNum == 1 && frontNum == 5)printf("%d\n", dice[3]);
		if (topNum == 2 && frontNum == 1)printf("%d\n", dice[3]);
		if (topNum == 2 && frontNum == 3)printf("%d\n", dice[0]);
		if (topNum == 2 && frontNum == 4)printf("%d\n", dice[5]);
		if (topNum == 2 && frontNum == 6)printf("%d\n", dice[2]);
		if (topNum == 3 && frontNum == 1)printf("%d\n", dice[1]);
		if (topNum == 3 && frontNum == 2)printf("%d\n", dice[5]);
		if (topNum == 3 && frontNum == 5)printf("%d\n", dice[0]);
		if (topNum == 3 && frontNum == 6)printf("%d\n", dice[4]);
		if (topNum == 4 && frontNum == 1)printf("%d\n", dice[4]);
		if (topNum == 4 && frontNum == 2)printf("%d\n", dice[0]);
		if (topNum == 4 && frontNum == 5)printf("%d\n", dice[5]);
		if (topNum == 4 && frontNum == 6)printf("%d\n", dice[1]);
		if (topNum == 5 && frontNum == 1)printf("%d\n", dice[2]);
		if (topNum == 5 && frontNum == 3)printf("%d\n", dice[5]);
		if (topNum == 5 && frontNum == 4)printf("%d\n", dice[0]);
		if (topNum == 5 && frontNum == 6)printf("%d\n", dice[3]);
		if (topNum == 6 && frontNum == 2)printf("%d\n", dice[3]);
		if (topNum == 6 && frontNum == 3)printf("%d\n", dice[1]);
		if (topNum == 6 && frontNum == 4)printf("%d\n", dice[4]);
		if (topNum == 6 && frontNum == 5)printf("%d\n", dice[2]);
	}
}