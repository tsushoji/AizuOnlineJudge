#include "6.h"

int quickSortPartition(StableCardData A[], int p, int r);
void quickSortSolve(StableCardData A[], int p, int r);
bool isStableQuickSort(StableCardData A[], int count);

void quickSort(void)
{
	int count;
	bool isStable;
	StableCardData card[QUICK_SORT_ARY_SIZE];
	scanf("%d", &count);
	for (int i = 0; i < count; i++) {
		scanf(" %c %d", &card[i].mark, &card[i].num);
		card[i].id = i;
	}
	quickSortSolve(card, 0, count - 1);
	isStable = isStableQuickSort(card, count);
	if (isStable) {
		printf("Stable\n");
	}
	else {
		printf("Not stable\n");
	}
	for (int j = 0; j < count; j++) {
		printf("%c %d\n", card[j].mark, card[j].num);
	}
}

int quickSortPartition(StableCardData A[], int p, int r)
{
	StableCardData tmpStableCardData;
	int x = A[r].num;
	int i = p - 1, j;
	for (j = p; j < r; j++) {
		if (A[j].num <= x) {
			i += 1;
			tmpStableCardData = A[i];
			A[i] = A[j];
			A[j] = tmpStableCardData;
		}
	}
	tmpStableCardData = A[r];
	A[r] = A[i + 1];
	A[i + 1] = tmpStableCardData;
	return i + 1;
}

void quickSortSolve(StableCardData A[], int p, int r)
{
	int q;
	if (p < r) {
		q = quickSortPartition(A, p, r);
		quickSortSolve(A, p, q - 1);
		quickSortSolve(A, q + 1, r);
	}
}

bool isStableQuickSort(StableCardData A[], int count) {
	for (int i = 0; i < count - 1; i++) {
		if (A[i].num == A[i + 1].num && A[i].id > A[i + 1].id) {
			return false;
		}
	}
	return true;
}