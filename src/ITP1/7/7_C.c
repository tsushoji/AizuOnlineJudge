#include "7.h"

void matrixVectorPlus(void)
{
	int matrixVector[SPREAD_SHEET_ARY_Y_SIZE][SPREAD_SHEET_ARY_X_SIZE] = { 0 };
	int x, y;
	int p, q;
	int total;
	int rowTotal;
	scanf("%d %d", &y, &x);
	for (p = 0; p < y; p++) {
		for (q = 0; q < x; q++) {
			scanf("%d ", &matrixVector[p][q]);
		}
		total = 0;
		for (int r = 0; r < x; r++) {
			total += matrixVector[p][r];
		}
		matrixVector[p][x] = total;
	}
	for(int k = 0; k < x + 1; k++){
		rowTotal = 0;
		for(int l = 0; l < y; l++){
			rowTotal += matrixVector[l][k];
		}
		matrixVector[y][k] = rowTotal;
	}
	for (int i = 0; i < y + 1; i++) {
		for (int j = 0; j < x; j++) {
			printf("%d ", matrixVector[i][j]);
		}
		printf("%d\n", matrixVector[i][x]);
	}
}