#include "10.h"

void distanceDisplay(void)
{
	double firstX;
	double firstY;
	double secondX;
	double secondY;
	double distance;
	scanf("%lf %lf %lf %lf", &firstX, &firstY, &secondX, &secondY);
	distance = sqrt(pow(secondX - firstX, 2) + pow(secondY - firstY, 2));
	printf("%lf\n", distance);
}