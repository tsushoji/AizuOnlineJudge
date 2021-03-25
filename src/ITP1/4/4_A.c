#include "4.h"

void divisionCalculationDisplay(void)
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int intDivision = a / b;
	int intRemainder = a % b;
	double doubleDivision = (double)a / b;
	printf("%d %d %f\n", intDivision, intRemainder, doubleDivision);
}