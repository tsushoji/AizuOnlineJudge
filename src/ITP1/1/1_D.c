#include "1.h"

void hourMinuteAndSecondDisplay(void)
{
    int x;
	int y;
	int area;
	int circumferential_length;
	scanf("%d %d", &x, &y);
	area = x * y;
	circumferential_length = 2 * (x + y);
	printf("%d %d\n", area, circumferential_length);
}