#include "4.h"
#include "./../../common.h"

void maxAndMinValDisplay(void)
{
	int count;
	int num;
	long sum = 0;
	scanf("%d", &count);
	int intAry[count];
	for(int i = 0; i < count; i++){
		scanf("%d ", &num);
		sum += num;
		intAry[i] = num;
	}
	int min = getValMin(intAry, count);
	int max = getValMax(intAry, count);
	printf("%d %d %ld\n", min, max, sum);
}