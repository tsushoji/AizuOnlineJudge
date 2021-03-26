#include "10.h"
#include "../../common.h"

void vectorDistanceDisplay(void)
{
	int dimension;
	double xNum[DISTANCE_VECTOR_ARY_X_SIZE];
	double yNum[DISTANCE_VECTOR_ARY_Y_SIZE];
	double diff[DISTANCE_DIFF_MATRIX_VECTOR_ARY_SIZE] = { 0 };
	double manhattan = 0;
	double sum = 0;
	double secondEuclid;
	double thirdEuclid;
	double chebyChef;
	scanf("%d", &dimension);
	for (int p = 0; p < dimension; p++) {
		scanf("%lf", &xNum[p]);
	}
	for (int q = 0; q < dimension; q++) {
		scanf("%lf", &yNum[q]);
	}
	for (int r = 0; r < dimension; r++) {
		if (xNum[r] < yNum[r]) {
			diff[r] = yNum[r] - xNum[r];
		}
		else {
			diff[r] = xNum[r] - yNum[r];
		}
	}
	for (int s = 0; s < dimension; s++) {
		manhattan += diff[s];
	}
	for (int s = 0; s < dimension; s++) {
		sum += pow(diff[s], 2);
	}
	secondEuclid = sqrt(sum);
	sum = 0;
	for (int s = 0; s < dimension; s++) {
		sum += pow(diff[s], 3);
	}
	thirdEuclid = cbrt(sum);
	chebyChef = getDoubleValMax(diff, dimension);
	printf("%lf\n", manhattan);
	printf("%lf\n", secondEuclid);
	printf("%lf\n", thirdEuclid);
	printf("%lf\n", chebyChef);
}

