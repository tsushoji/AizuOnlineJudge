#include "6.h"

void matrixVectorDisplay(void)
{
	int input_y = 0;
	int input_x = 0;
	scanf("%d %d", &input_y, &input_x);
	int inputFirstAry[MATRIX_VECTOR_ARY_Y_SIZE][MATRIX_VECTOR_ARY_X_SIZE];
	for (int p = 0; p < input_y; p++) {
		for (int q = 0; q < input_x; q++) {
			scanf("%d ", &inputFirstAry[p][q]);
		}
	}
	int inputSecondAry[MATRIX_VECTOR_ARY_X_SIZE][1];
	for (int r = 0; r < input_x; r++) {
		scanf("%d", &inputSecondAry[r][0]);
	}
	int outputAry[MATRIX_VECTOR_ARY_Y_SIZE][1] = {0};
	for (int s = 0; s < input_y; s++) {
	    outputAry[s][0] = 0;
		for (int t = 0; t < input_x; t++) {
			outputAry[s][0] = outputAry[s][0] + inputFirstAry[s][t] * inputSecondAry[t][0];
		}
	}
	for (int v = 0; v < input_y; v++) {
		printf("%d\n", outputAry[v][0]);
	}
}