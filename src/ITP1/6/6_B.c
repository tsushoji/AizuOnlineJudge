#include "6.h"

void cardMarkDisplay(void)
{
	int cards[CARDS_ARY_Y_SIZE][CARDS_ARY_X_SIZE] = {0};
	int count;
	char cardMark;
	int cardMarkNum;
	bool canSetCardMarkNumFlg = false;
	int cardNum;
	scanf("%d", &count);
	for (int i = 0; i < count; i++) {
		scanf("%c", &cardMark);
		scanf("%c %d", &cardMark, &cardNum);
		switch (cardMark) {
			case CARDMARK_SPADE_CHARACTER:
				cardMarkNum = 0;
				canSetCardMarkNumFlg = true;
				break;
			case CARDMARK_HEART_CHARACTER:
				cardMarkNum = 1;
				canSetCardMarkNumFlg = true;
				break;
			case CARDMARK_CLUB_CHARACTER:
				cardMarkNum = 2;
				canSetCardMarkNumFlg = true;
				break;
			case CARDMARK_DIA_CHARACTER:
				cardMarkNum = 3;
				canSetCardMarkNumFlg = true;
				break;
			default:
				break;
		}
		if (canSetCardMarkNumFlg) {
			cards[cardMarkNum][cardNum - 1] = cardNum;
		}
	}
	for (int p = 0; p < CARDS_ARY_Y_SIZE; p++) {
		for (int q = 0; q < CARDS_ARY_X_SIZE; q++) {
			if (cards[p][q] == 0) {
				switch (p) {
				case 0:
					cardMark = CARDMARK_SPADE_CHARACTER;
					break;
				case 1:
					cardMark = CARDMARK_HEART_CHARACTER;
					break;
				case 2:
					cardMark = CARDMARK_CLUB_CHARACTER;
					break;
				case 3:
					cardMark = CARDMARK_DIA_CHARACTER;
					break;
				default:
					break;
				}
				printf("%c %d\n", cardMark, q + 1);
			}
		}
	}
}