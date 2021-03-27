#include "8.h"

BinarySearchTreePointer rootVolTwo;

void insertBinarySearchTreeVolTwo(int num);
BinarySearchTreePointer findBinarySearchTreeVolTwo(int num);

void binarySearchTreeVolTwo(void)
{
	int count, i, num;
	char op[BINARY_SEARCH_TREE_OP_STR_SIZE];
	scanf("%d", &count);
	for (i = 0; i < count; i++) {
		scanf("%s", &op);
		if (op[0] == 'i') {
			scanf("%d", &num);
			insertBinarySearchTreeVolTwo(num);
		}
		else if (op[0] == 'f') {
			scanf("%d", &num);
			if (findBinarySearchTreeVolTwo(num) != NULL) {
				printf("yes\n");
			}
			else {
				printf("no\n");
			}
		}
		else if (op[0] == 'p') {
			printInOrderBinarySearchTree(rootVolTwo);
			printf("\n");
			printPreOrderBinarySearchTree(rootVolTwo);
			printf("\n");
		}
	}
}

void insertBinarySearchTreeVolTwo(int num) {
	BinarySearchTreePointer y = NULL;
	BinarySearchTreePointer x = rootVolTwo;
	BinarySearchTreePointer z = (BinarySearchTree*)malloc(sizeof(BinarySearchTreePointer));

	z->key = num;
	z->left = NULL;
	z->right = NULL;

	while (x != NULL) {
		y = x;
		if (z->key < x->key) {
			x = x->left;
		}
		else {
			x = x->right;
		}
	}
	z->parent = y;

	if (y == NULL) {
		rootVolTwo = z;
	}
	else if (z->key < y->key) {
		y->left = z;
	}
	else {
		y->right = z;
	}
}

BinarySearchTreePointer findBinarySearchTreeVolTwo(int num) {
	BinarySearchTreePointer x = rootVolTwo;

	while (x != NULL) {
		if (num < x->key) {
			x = x->left;
		}
		else if (num > x->key) {
			x = x->right;
		}
		else {
			break;
		}
	}
	return x;
}