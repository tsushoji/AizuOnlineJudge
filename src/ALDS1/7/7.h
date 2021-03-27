#ifndef ALDS1_7_H_
#define ALDS1_7_H_

/*============================================================================*/
/* include */
/*============================================================================*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*============================================================================*/
/* typedef */
/*============================================================================*/
typedef struct TreeNode* TreeNodePointer;

typedef struct
{
	int parent, left, right, sibling, degree, depth, height;
} BinaryTree;

typedef struct
{
	int left, right;
} ReconstructionTreeNode;

/*============================================================================*/
/* define */
/*============================================================================*/
#define TREE_NODE_TYPE_SIZE (13)
#define TREE_NODE_ARY_SIZE (100000)
#define BINARY_TREE_ARY_SIZE (26)
#define RECONSTRUCTION_TREE_ARY_SIZE (41)

/*============================================================================*/
/* enum */
/*============================================================================*/

/*============================================================================*/
/* struct */
/*============================================================================*/
struct TreeNode
{
	int key;
	struct TreeNode* parent;
	int degree;
	int depth;
	int height;
	char type[TREE_NODE_TYPE_SIZE];
	int *childAry;
};

/*============================================================================*/
/* func */
/*============================================================================*/

/*============================================================================*/
/* extern(val) */
/*============================================================================*/

/*============================================================================*/
/* extern(func) */
/*============================================================================*/

/*============================================================================*/
/* Macro */
/*============================================================================*/
void rootedTrees(void);
void setSibling(int num, BinaryTree binaryTree[]);
void setDegree(int num, BinaryTree binaryTree[]);
void setDepth(int num, BinaryTree binaryTree[], int depth);
int setHeight(int num, BinaryTree binaryTree[]);
void binaryTrees(void);
void treeWalk(void);
void reconstructionOfATree(void);

#endif

