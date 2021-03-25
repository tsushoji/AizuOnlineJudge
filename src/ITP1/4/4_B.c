#include "4.h"

void circleCalculationDisplay(void)
{
	double r;
	scanf("%lf", &r);
	double area = r * r * PI;
	double circle = 2 * r * PI;
	printf("%f %f\n", area, circle);
}