#include "7.h"

void judgeScore(void)
{
	int midTermExamScore;
	int finalExamScore;
	int retestScore;
	int sumScore;
	while (true) {
		scanf("%d %d %d", &midTermExamScore, &finalExamScore, &retestScore);
		if (midTermExamScore == -1 && finalExamScore == -1 && retestScore == -1) {
			break;
		}
		if (midTermExamScore == -1 || finalExamScore == -1) {
			printf("F\n");
			continue;
		}
		sumScore = midTermExamScore + finalExamScore;
		if (sumScore >= 80) {
			printf("A\n");
		}
		else if (sumScore >= 65 && sumScore < 80) {
			printf("B\n");
		}
		else if (sumScore >= 50 && sumScore < 65) {
			printf("C\n");
			
		}
		else if (sumScore >= 30 && sumScore < 50) {
			if (retestScore >= 50) {
				printf("C\n");
			}
			else {
				printf("D\n");
			}
		}
		else {
			printf("F\n");
		}
	}
}