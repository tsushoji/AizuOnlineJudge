#include "10.h"

void triangleCalculationDisplay(void)
{
	double a;
	double b;
	int c;
	double s;
	double l;
	double h;
	double rad;
	double PI = acos(-1);
	scanf("%lf %lf %d", &a, &b, &c);
	rad = c * PI / 180;
	s = a * b * sin(rad) / 2;
	l = a + b + sqrt(pow(a, 2) + pow(b, 2) - 2 * a * b * cos(rad));
	h = b * sin(rad);
	printf("%lf\n", s);
	printf("%lf\n", l);
	printf("%lf\n", h);
}