#include "4.h"

void binarySearch(void)
{
	int count;
	int ary[BINARY_SEARCH_ARY];
	int tarCount;
	int tarNum;
	int counter = 0;
	int left;
	int right;
	int mid;
	scanf("%d", &count);
	for(int i = 0; i < count; i++){
		scanf("%d", &ary[i]);
	}
	scanf("%d", &tarCount);
	for(int j = 0; j < tarCount; j++){
		scanf("%d", &tarNum);
		right = count - 1;
		left = 0;
		while(right >= left){
			mid = (right + left) / 2;
			if(ary[mid] == tarNum){
				counter++;
				break;
			}else if(ary[mid] > tarNum){
				right = mid - 1;
			}else if(ary[mid] < tarNum){
				left = mid + 1;
			}
		}
	}
	printf("%d\n", counter);
}