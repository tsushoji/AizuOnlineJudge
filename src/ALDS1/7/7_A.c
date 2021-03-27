#include "7.h"

void searchNodeDepth(TreeNodePointer treeNode, int depth, TreeNodePointer treeNodePointer[]);

void rootedTrees(void)
{
	int count, id, childNum, childId;
	scanf("%d", &count);
	TreeNodePointer treeNodeAry[TREE_NODE_ARY_SIZE];
	for (int i = 0; i < count; i++) {
		treeNodeAry[i] = (TreeNodePointer)malloc(sizeof(struct TreeNode));
		treeNodeAry[i]->parent = NULL;
		treeNodeAry[i]->degree = 0;
		strcpy(treeNodeAry[i]->type, "internal node");
	}
	for (int i = 0; i < count; i++) {
		scanf("%d %d", &id, &childNum);
		treeNodeAry[id]->key = id;
		treeNodeAry[id]->childAry = (int *)malloc(childNum * sizeof(int));
		if (childNum == 0) {
			strcpy(treeNodeAry[id]->type, "leaf");
		}
		else {
			for (int i = 0; i < childNum; i++) {
				scanf("%d", &childId);
				treeNodeAry[id]->childAry[i] = childId;
				treeNodeAry[childId]->parent = treeNodeAry[id];
				treeNodeAry[id]->degree++;
			}
		}	
	}
	for (int i = 0; i < count; i++) {
		if (treeNodeAry[i]->parent == NULL) {
			strcpy(treeNodeAry[i]->type, "root");
			searchNodeDepth(treeNodeAry[i], 0, treeNodeAry);
			break;
		}
	}
	for (int i = 0; i < count; i++) {
		printf("node %d: ", i);
		if (treeNodeAry[i]->parent != NULL) {
			printf("parent = %d, ", treeNodeAry[i]->parent->key);
		}
		else {
			printf("parent = %d, ", -1);
		}
		printf("depth = %d, %s, [", treeNodeAry[i]->depth, treeNodeAry[i]->type);
		for (int j = 0; j < treeNodeAry[i]->degree; j++) {
			printf("%d", treeNodeAry[i]->childAry[j]);
			if (j + 1 != treeNodeAry[i]->degree) {
				printf(", ");
			}
		}
		printf("]\n");
	}
}

void searchNodeDepth(TreeNodePointer treeNode, int depth, TreeNodePointer treeNodePointer[])
{
	treeNode->depth = depth;
	if (treeNode->degree == 0) {
		treeNode->height = 0;
		return;
	}
	for (int i = 0; i < treeNode->degree; i++) {
		searchNodeDepth(treeNodePointer[treeNode->childAry[i]], depth + 1, treeNodePointer);
	}
}