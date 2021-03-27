#include "7.h"

int A[RECONSTRUCTION_TREE_ARY_SIZE], B[RECONSTRUCTION_TREE_ARY_SIZE];
int counter = 0;
ReconstructionTreeNode C[RECONSTRUCTION_TREE_ARY_SIZE];

void printReconstructionTreePostOrder(int root, int n);
int solveReconstructionTree(int start, int end, int count);

void reconstructionOfATree(void)
{
	int count, i, root;
	scanf("%d", &count);
	for (i = 1; i <= count; i++) {
		scanf("%d", &A[i]);
	}
	for (i = 1; i <= count; i++) {
		scanf("%d", &B[i]);
	}
	for (i = 1; i <= count; i++) {
		C[i].left = -1;
		C[i].right = -1;
	}
	root = solveReconstructionTree(1, count, count);
	printReconstructionTreePostOrder(root, count);
}

void printReconstructionTreePostOrder(int root, int n) {
	if (C[root].left != -1) {
		printReconstructionTreePostOrder(C[root].left, n);
	}
	if (C[root].right != -1) {
		printReconstructionTreePostOrder(C[root].right, n);
	}
	if (counter < n - 1) {
		printf("%d ", root);
	}
	else {
		printf("%d\n", root);
	}
	counter++;
	return;
}

int solveReconstructionTree(int start, int end, int count) {
	int i, j;
	if (start == end) {
		return B[start];
	}
	if (start > end) {
		return -1;
	}
	for (i = 1; i <= count; i++) {
		for (j = start; j <= end; j++) {
			if (A[i] == B[j]) {
				C[A[i]].left = solveReconstructionTree(start, j - 1, count);
				C[A[i]].right = solveReconstructionTree(j + 1, end, count);
				return A[i];
			}
		}
	}
    return -1;
}