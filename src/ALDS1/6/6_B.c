#include "6.h"

int partitionSolve(int A[], int p, int r);

void partition(void)
{
	int count;
	scanf("%d", &count);
	int A[PARTITION_ARY_SIZE];
	for (int i = 0; i < count; i++) {
		scanf("%d", &A[i]);
	}
	int p = partitionSolve(A, 0, count - 1);
	for (int j = 0; j < count - 1; j++) {
		if (j == p) {
			printf("[");
		}
		if (j == p) {
			printf("%d] ", A[j]);
		}
		else {
			printf("%d ", A[j]);
		}
	}
	printf("%d\n", A[count - 1]);
}

int partitionSolve(int A[], int p, int r)
{
	int i, j, tmpNum;
	int x = A[r];
	i = p - 1;
	for (j = p; j < r; j++) {
		if (A[j] <= x) {
			i += 1;
			tmpNum = A[i];
			A[i] = A[j];
			A[j] = tmpNum;
		}
	}
	A[r] = A[i + 1];
	A[i + 1] = x;
	return i + 1;
}