#include "10.h"

void scoreCalculationDisplay(void)
{
	double sum;
	double average;
	int count;
	double score[1000];
	double output;
	while (1) {
		scanf("%d", &count);
		if (count == 0) {
			break;
		}
		sum = 0;
		for (int i = 0; i < count - 1; i++) {
			scanf("%lf ", &score[i]);
			sum += score[i];
		}
		scanf("%lf", &score[count - 1]);
		sum += score[count - 1];
		average = sum / (double)count;
		sum = 0;
		for (int j = 0; j < count; j++) {
			sum += pow(score[j] - average, 2);
		}
		output = sqrt(sum / (double)count);
		printf("%lf\n", output);
	}
}