#include "4.h"

void linearSearch(void)
{
	int count;
	int ary[LINEAR_SEARCH_ARY];
	int tarCount;
	int tarAry[LINEAR_SEARCH_TAR_ARY];
	int counter = 0;
	scanf("%d", &count);
	for(int i = 0; i < count; i++){
		scanf("%d", &ary[i]);
	}
	scanf("%d", &tarCount);
	for(int j = 0; j < tarCount; j++){
		scanf("%d", &tarAry[j]);
	}
	for(int p = 0; p < tarCount; p++){
		for(int q = 0; q < count; q++){
			if(ary[q] == tarAry[p]){
				counter++;
				break;
			}
		}
	}
	printf("%d\n", counter);
}