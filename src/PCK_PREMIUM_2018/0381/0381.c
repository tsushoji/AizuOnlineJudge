#include "0381.h"
/*============================================================================*/
/* global */
/*============================================================================*/

/*============================================================================*/
/* const */
/*============================================================================*/

/*============================================================================*/
/* prototype */
/*============================================================================*/
int main()
{
    int firstInput;
	int secondInput;
	int output;
	scanf("%d%d\n", &firstInput, &secondInput);
	if (!canValidateCheck(firstInput, secondInput))
	{
		return 0;
	}
	output = calculateDestination(firstInput, secondInput);
	printf("%d\n", output);
    return 0;
}

bool canValidateCheck(int tarFirstNum, int tarSecondNum)
{
	if (0 > tarFirstNum || tarFirstNum > 100 || 0 > tarSecondNum || tarSecondNum > 100)
	{
		return false;
	}
	return true;
}

int calculateDestination(int firstNum, int secondNum)
{
	if (firstNum > secondNum)
	{
		return firstNum - secondNum;
	}
	else
	{
		return secondNum - firstNum;
	}
}
