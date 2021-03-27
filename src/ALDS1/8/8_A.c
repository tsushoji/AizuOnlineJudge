#include "8.h"

BinarySearchTreePointer rootVolOne;

void insertBinarySearchTreeVolOne(int num);

void binarySearchTreeVolOne(void)
{
	int count, i, num;
	char op[BINARY_SEARCH_TREE_OP_STR_SIZE];
	scanf("%d", &count);
	for (i = 0; i < count; i++) {
		scanf("%s", &op);
		if (op[0] == 'i') {
			scanf("%d", &num);
			insertBinarySearchTreeVolOne(num);
		}
		else if (op[0] == 'p') {
			printInOrderBinarySearchTree(rootVolOne);
			printf("\n");
			printPreOrderBinarySearchTree(rootVolOne);
			printf("\n");
		}
	}
}

void printInOrderBinarySearchTree(BinarySearchTreePointer root) {
	if (root != NULL) {
		printInOrderBinarySearchTree(root->left);
		printf(" %d", root->key);
		printInOrderBinarySearchTree(root->right);
	}
}

void printPreOrderBinarySearchTree(BinarySearchTreePointer root) {
	if (root != NULL) {
		printf(" %d", root->key);
		printPreOrderBinarySearchTree(root->left);
		printPreOrderBinarySearchTree(root->right);
	}
}

void insertBinarySearchTreeVolOne(int num) {
	BinarySearchTreePointer y = NULL;
	BinarySearchTreePointer x = rootVolOne;
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
		rootVolOne = z;
	}
	else if (z->key < y->key) {
		y->left = z;
	}
	else {
		y->right = z;
	}
}