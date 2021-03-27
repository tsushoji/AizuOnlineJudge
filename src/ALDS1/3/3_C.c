#include "3.h"

void doublyLinkedList(void)
{
	int count;
	char op[LINKEDLIST_OPERATION_ARY_STR_SIZE];
	int nodeVal;
	node dummy;
	node insertNode;
	node curNode;
	scanf("%d", &count);
	dummy = (struct P*)malloc(sizeof(node));
	dummy->pre = dummy;
	dummy->next = dummy;
	for (int i = 0; i < count; i++) {
		scanf("%s", op);
		switch (op[0]) {
			case 'i':
				scanf("%d", &nodeVal);
				insertNode = (struct P*)malloc(sizeof(node));
				insertNode->intKey = nodeVal;
				insertNode->next = dummy->next;
				dummy->next->pre = insertNode;
				dummy->next = insertNode;
				insertNode->pre = dummy;
				break;
			case 'd':
			    if(strlen(op) == 6){
			        scanf("%d", &nodeVal);
					curNode = dummy->next;
					while(curNode != dummy && curNode->intKey != nodeVal){
						curNode = curNode->next;
					}
					node searchNode = curNode;
					if(searchNode == dummy){
						break;
					}
					searchNode->pre->next = searchNode->next;
					searchNode->next->pre = searchNode->pre;
					break;
			    }else{
			        switch(op[6]){
			            case 'F':
			                curNode = dummy->next;
							if(curNode == dummy){
								break;
							}
							curNode->pre->next = curNode->next;
							curNode->next->pre = curNode->pre;
							break;
            			case 'L':
            			    curNode = dummy->pre;
							if(curNode == dummy){
								break;
							}
							curNode->pre->next = curNode->next;
							curNode->next->pre = curNode->pre;
							break;
            			default:
            			    break;
			        }
			    }
		}
	}
	curNode = dummy->next;
	int isf = 1;
	while(1){
		if ( curNode == dummy ){
			break;
		}
		if ( isf == 0){
			printf(" ");
		}
		printf("%d", curNode->intKey);
		curNode = curNode->next;
		isf = 0;
	}
	printf("\n");
}