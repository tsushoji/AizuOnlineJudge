#include "3.h"

void divisibleNumDisplay(void)
{
	int x = 0;
	int y = 0;
	int z = 0;
	int count = 0;
	scanf("%d %d %d", &x, &y, &z);
	for(int i = x; i < y + 1; i++){
		if(z % i == 0){
			count++;
		}
	}
	printf("%d\n", count);
}