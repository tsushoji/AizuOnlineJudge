#include "2.h"

bool isStable(CardData *in, CardData *out, int count);

void stableSort(void)
{
	int count;
	int tmpNum;
	char tmpMark;
	int minNumIndex;
	scanf("%d\n", &count);
	CardData in[STABLE_SORT_ARY_SIZE], a[STABLE_SORT_ARY_SIZE], b[STABLE_SORT_ARY_SIZE];
	for (int i = 0; i < count - 1; i++) {
		scanf("%c%d ", &in[i].mark, &in[i].num);
	}
	scanf("%c%d", &in[count - 1].mark, &in[count - 1].num);
	for (int n = 0; n < count; n++) {
		a[n].mark = in[n].mark;
		a[n].num = in[n].num;
		b[n].mark = in[n].mark;
		b[n].num = in[n].num;
	}
	for (int j = 0; j < count; j++) {
		for (int k = count - 1; k > 0; k--) {
			if (a[k].num < a[k - 1].num) {
				tmpMark = a[k].mark;
				tmpNum = a[k].num;
				a[k].mark = a[k - 1].mark;
				a[k].num = a[k - 1].num;
				a[k - 1].mark = tmpMark;
				a[k - 1].num = tmpNum;
			}
		}
	}
	for (int l = 0; l < count; l++) {
		minNumIndex = l;
		for (int m = l + 1; m < count; m++) {
			if (b[m].num < b[minNumIndex].num ) {
				minNumIndex = m;
			}
		}
		if (b[l].num > b[minNumIndex].num) {
			tmpMark = b[l].mark;
			tmpNum = b[l].num;
			b[l].mark = b[minNumIndex].mark;
			b[l].num = b[minNumIndex].num;
			b[minNumIndex].mark = tmpMark;
			b[minNumIndex].num = tmpNum;
		}
	}
	for (int p = 0; p < count - 1; p++) {
		printf("%c%d ", a[p].mark, a[p].num);
	}
	printf("%c%d\n", a[count - 1].mark, a[count - 1].num);
	if (isStable(in, a, count)) {
		printf("Stable\n");
	}
	else {
		printf("Not stable\n");
	}
	for (int q = 0; q < count - 1; q++) {
		printf("%c%d ", b[q].mark, b[q].num);
	}
	printf("%c%d\n", b[count - 1].mark, b[count - 1].num);
	if (isStable(in, b, count)) {
		printf("Stable\n");
	}
	else {
		printf("Not stable\n");
	}
}

bool isStable(CardData *in, CardData *out, int count) {
	for (int i = 0; i < count; i++) {
		for (int j = i + 1; j < count; j++) {
			for (int p = 0; p < count; p++) {
				for (int q = p + 1; q < count; q++) {
					if (in[i].num == in[j].num && in[i].mark == out[q].mark && in[i].num == out[q].num && in[j].mark == out[p].mark && in[j].num == out[p].num) {
						return false;
					}
				}
			}
		}
	}
	return true;
}