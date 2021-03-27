#include "7.h"

void binaryTrees(void)
{
	int count, num, left, right, root;
	BinaryTree binaryTree[BINARY_TREE_ARY_SIZE];
	scanf("%d", &count);
	for (int i = 0; i < count; i++) {
		binaryTree[i].parent = -1;
	}
	for (int i = 0; i < count; i++) {
		scanf("%d %d %d", &num, &left, &right);
		binaryTree[num].left = left;
		binaryTree[num].right = right;
		if (left != -1) {
			binaryTree[left].parent = num;
		}
		if (right != -1) {
			binaryTree[right].parent = num;
		}
	}
	for (int i = 0; i < count; i++) {
		setSibling(i, binaryTree);
		setDegree(i, binaryTree);
	}
	for (int i = 0; i < count; i++) {
		if (binaryTree[i].parent == -1) {
			root = i;
		}
	}
	setDepth(root, binaryTree, 0);
	setHeight(root, binaryTree);
	for (int i = 0; i < count; i++) {
		printf("node %d: ", i);
		printf("parent = %d, ", binaryTree[i].parent);
		printf("sibling = %d, ", binaryTree[i].sibling);
		printf("degree = %d, ", binaryTree[i].degree);
		printf("depth = %d, ", binaryTree[i].depth);
		printf("height = %d, ", binaryTree[i].height);
		if (i == root) {
			printf("root\n");
		}
		else if (binaryTree[i].left == -1 && binaryTree[i].right == -1) {
			printf("leaf\n");
		}
		else {
			printf("internal node\n");
		}
	}
}

void setSibling(int num, BinaryTree binaryTree[]) {
	if (binaryTree[num].parent == -1) {
		binaryTree[num].sibling = -1;
	}
	else if (binaryTree[binaryTree[num].parent].left != num && binaryTree[binaryTree[num].parent].left != -1) {
		binaryTree[num].sibling = binaryTree[binaryTree[num].parent].left;
	}
	else if (binaryTree[binaryTree[num].parent].right != num && binaryTree[binaryTree[num].parent].right != -1) {
		binaryTree[num].sibling = binaryTree[binaryTree[num].parent].right;
	}
	else {
		binaryTree[num].sibling = -1;
	}
}

void setDegree(int num, BinaryTree binaryTree[]) {
	int deg = 0;
	if (binaryTree[num].left != -1) {
		deg++;
	}
	if (binaryTree[num].right != -1) {
		deg++;
	}
	binaryTree[num].degree = deg;
}

void setDepth(int num, BinaryTree binaryTree[], int depth) {
	if (num == -1) {
		return;
	}
	binaryTree[num].depth = depth;
	setDepth(binaryTree[num].left, binaryTree, depth + 1);
	setDepth(binaryTree[num].right, binaryTree, depth + 1);
}

int setHeight(int num, BinaryTree binaryTree[]) {
	int p = 0, q = 0;
	if (binaryTree[num].left != -1) {
		p = setHeight(binaryTree[num].left, binaryTree) + 1;
	}
	if (binaryTree[num].right != -1) {
		q = setHeight(binaryTree[num].right, binaryTree) + 1;
	}
	return binaryTree[num].height = (p > q ? p : q);
}