#include "7.h"

void matrixVectorMultiplication(void)
{
	int firstMatrixY;
	int firstMatrixX;
	int secondMatrixY;
	int secondMatrixX;
	scanf("%d %d %d", &firstMatrixY, &firstMatrixX, &secondMatrixX);
	secondMatrixY = firstMatrixX;
	int inputFirstAry[MATRIX_VECTOR_ARY_Y_SIZE][MATRIX_VECTOR_ARY_X_SIZE] = {0};
	for (int p = 0; p < firstMatrixY; p++) {
		for (int q = 0; q < firstMatrixX - 1; q++) {
			scanf("%d ", &inputFirstAry[p][q]);
		}
		scanf("%d", &inputFirstAry[p][firstMatrixX - 1]);
	}
	int inputSecondAry[MATRIX_VECTOR_ARY_Y_SIZE][MATRIX_VECTOR_ARY_X_SIZE] = {0};
	for (int i = 0; i < secondMatrixY; i++) {
		for (int j = 0; j < secondMatrixX - 1; j++) {
			scanf("%d ", &inputSecondAry[i][j]);
		}
		scanf("%d", &inputSecondAry[i][secondMatrixX - 1]);
	}
	long outputAry[MATRIX_VECTOR_ARY_Y_SIZE][MATRIX_VECTOR_ARY_X_SIZE] = {0};
	for (int s = 0; s < firstMatrixY; s++) {
		for (int t = 0; t < secondMatrixX; t++) {
			for(int u = 0; u < firstMatrixX; u++){
				outputAry[s][t] += (long)(inputFirstAry[s][u] * inputSecondAry[u][t]);
			}
		}
	}
	for (int v = 0; v < firstMatrixY; v++) {
		for (int w = 0; w < secondMatrixX - 1; w++) {
			printf("%ld ", outputAry[v][w]);
		}
		printf("%ld\n", outputAry[v][secondMatrixX - 1]);
	}
}