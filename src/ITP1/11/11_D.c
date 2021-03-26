#include "11.h"
#include "../../common.h"

bool judgeDice(Dice *firstDice, Dice *secondDice);

void judgeSecondSameDice(void)
{
	int count;
	int j;
	Dice firstDice, secondDice;
	bool equalFlag = false;
	scanf("%d", &count);
	int counter = 0;
	for (int i = 0; i < 6; i++) {
		scanf("%d", &firstDice.face[i]);
	}
	count--;
	for (j = 0; j < count; j++) {
		for (int k = 0; k < 6; k++) {
			scanf("%d", &secondDice.face[k]);
		}
		if (!judgeDice(&firstDice, &secondDice)) {
			counter++;
		}
	}
	if (count == counter) {
		printf("Yes\n");
	}
	printf("No\n");
}

bool judgeDice(Dice *firstDice, Dice *secondDice)
{
	int k;
	int tmpDice;
	int tmpSecondDice;
	char op;
	int tmpfirstDice;
	int tmpsecondDice;
	for (int l = 0; l < strlen(THIRD_DICE_ORDER); l++) {
		if (firstDice -> face[0] == secondDice -> face[0]) {
			for (int m = 0; m < 4; m++) {
				if (firstDice -> face[1] != secondDice -> face[1]) {
					tmpfirstDice = secondDice -> face[1];
					tmpsecondDice = secondDice -> face[3];
					secondDice -> face[1] = secondDice -> face[2];
					secondDice -> face[2] = secondDice -> face[4];
					secondDice -> face[3] = tmpfirstDice;
					secondDice -> face[4] = tmpsecondDice;
				}
				else {
					break;
				}
			}
		}
		for (k = 0; k < 6; k++) {
			if (firstDice -> face[k] != secondDice -> face[k]) {
				break;
			}
		}
		if (k == 6) {
			return true;
		}
		op = THIRD_DICE_ORDER[l];
		setDice(secondDice, op);
	}
	return false;
}