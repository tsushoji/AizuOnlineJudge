#include "0385.h"
/*============================================================================*/
/* global */
/*============================================================================*/
int diff = 0;

/*============================================================================*/
/* const */
/*============================================================================*/

/*============================================================================*/
/* prototype */
/*============================================================================*/
int main()
{
	int size, a[BOZO_SORT_ARY_SIZE];
	int x, y, count, firstVal, secondVal;
	scanf("%d", &size);
	a[0] = -BOZO_SORT_UP_VAL;
	a[size + 1] = BOZO_SORT_UP_VAL;
	for (int i = 1; i <= size; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < size; i++) {
		if (a[i] > a[i + 1]) {
			diff++;
		}
	}
	if (diff == 0) {
		printf("%d\n", 0);
		return 0;
	}
	scanf("%d", &count);
	for (int i = 1; i <= count; i++) {
		scanf("%d %d", &x, &y);
		firstVal = a[x];
		secondVal = a[y];
		bozoSortUpdateSequence(a, x, secondVal);
		bozoSortUpdateSequence(a, y, firstVal);
		if (diff == 0) {
			printf("%d\n", i);
			break;
		}
	}
	if (diff > 0) {
		printf("%d\n", -1);
	}
	return 0;
}

void bozoSortUpdateSequence(int sequence[], int tarIndexNum, int conVal) {
	int firstDiff = 0, secondDiff = 0;
	if (sequence[tarIndexNum - 1] > sequence[tarIndexNum]) {
		firstDiff++;
	}
	if (sequence[tarIndexNum] > sequence[tarIndexNum + 1]) {
		firstDiff++;
	}
	sequence[tarIndexNum] = conVal;
	if (sequence[tarIndexNum - 1] > sequence[tarIndexNum]) {
		secondDiff++;
	}
	if (sequence[tarIndexNum] > sequence[tarIndexNum + 1]) {
		secondDiff++;
	}
	diff += (secondDiff - firstDiff);
}
