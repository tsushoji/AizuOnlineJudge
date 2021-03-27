#include "7.h"

void printPreOrder(int num, BinaryTree binaryTree[]);
void printInOrder(int num, BinaryTree binaryTree[]);
void printPostOrder(int num, BinaryTree binaryTree[]);

void treeWalk(void)
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
	printf("Preorder\n");
	printPreOrder(root, binaryTree);
	printf("\n");
	printf("Inorder\n");
	printInOrder(root, binaryTree);
	printf("\n");
	printf("Postorder\n");
	printPostOrder(root, binaryTree);
	printf("\n");
}

void printPreOrder(int num, BinaryTree binaryTree[]) {
	if (num == -1) {
		return;
	}
	printf(" %d", num);
	printPreOrder(binaryTree[num].left, binaryTree);
	printPreOrder(binaryTree[num].right, binaryTree);
}

void printInOrder(int num, BinaryTree binaryTree[]) {
	if (num == -1) {
		return;
	}
	printInOrder(binaryTree[num].left, binaryTree);
	printf(" %d", num);
	printInOrder(binaryTree[num].right, binaryTree);
}

void printPostOrder(int num, BinaryTree binaryTree[]) {
	if (num == -1) {
		return;
	}
	printPostOrder(binaryTree[num].left, binaryTree);
	printPostOrder(binaryTree[num].right, binaryTree);
	printf(" %d", num);
}