#include "8.h"

BinarySearchTreePointer rootVolThree;

BinarySearchTreePointer findBinarySearchTreeVolThree(int num);
void insertBinarySearchTreeVolThree(int num);
BinarySearchTreePointer getMinBinarySearchTreePointer(BinarySearchTreePointer z);
void deleteBinarySearchTreeVolThree(BinarySearchTreePointer z);

void binarySearchTreeVolThree(void)
{
	int count, i, num;
	char op[BINARY_SEARCH_TREE_OP_STR_SIZE];
	scanf("%d", &count);
	for (i = 0; i < count; i++) {
		scanf("%s", &op);
		if (op[0] == 'i') {
			scanf("%d", &num);
			insertBinarySearchTreeVolThree(num);
		}
		else if (op[0] == 'f') {
			scanf("%d", &num);
			if (findBinarySearchTreeVolThree(num) != NULL) {
				printf("yes\n");
			}
			else {
				printf("no\n");
			}
		}
		else if (op[0] == 'd') {
			scanf("%d", &num);
			if (findBinarySearchTreeVolThree(num) != NULL) {
				deleteBinarySearchTreeVolThree(findBinarySearchTreeVolThree(num));
			}
		}
		else if (op[0] == 'p') {
			printInOrderBinarySearchTree(rootVolThree);
			printf("\n");
			printPreOrderBinarySearchTree(rootVolThree);
			printf("\n");
		}
	}
}

BinarySearchTreePointer findBinarySearchTreeVolThree(int num) {
	BinarySearchTreePointer x = rootVolThree;

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

void insertBinarySearchTreeVolThree(int num) {
	BinarySearchTreePointer y = NULL;
	BinarySearchTreePointer x = rootVolThree;
	BinarySearchTreePointer z = (BinarySearchTreePointer)malloc(sizeof(struct BinarySearchTree));

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
		rootVolThree = z;
	}
	else if (z->key < y->key) {
		y->left = z;
	}
	else {
		y->right = z;
	}
}

BinarySearchTreePointer getMinBinarySearchTreePointer(BinarySearchTreePointer z) {
	BinarySearchTreePointer n = z->right;
	while (n->left != NULL) {
		n = n->left;
	}
	return n;
}

void deleteBinarySearchTreeVolThree(BinarySearchTreePointer z) {
	BinarySearchTreePointer x, y;

	if (z->left != NULL && z->right != NULL) {
		y = getMinBinarySearchTreePointer(z);
	}
	else {
		y = z;
	}
	if (y->left != NULL) {
		x = y->left;
	}
	else {
		x = y->right;
	}
	if (x != NULL) {
		x->parent = y->parent;
	}
	if (y->parent == NULL) {
		rootVolThree = x;
	}
	else {
		if (y == (y->parent)->left) {
			(y->parent)->left = x;
		}
		else {
			(y->parent)->right = x;
		}
	}
	if (y != z) {
		z->key = y->key;
	}
	free(y);
}