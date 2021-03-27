#include "3.h"

void queue(void)
{
	int count;
	int quantum;
	int head =0;
	int tail = 0;
	int quantumSum = 0;
	ProcessInfo processInfo[QUE_ARY_SIZE];
	char strAry[QUE_ARY_SIZE][QUE_ARY_STR_SIZE];
	scanf("%d %d", &count, &quantum);
	for (int i = 0; i < count; i++) {
		scanf("%s %d", strAry[i], &processInfo[i].time);
		processInfo[i].strKey = i;
	}
	tail = count;
	while(head != tail){
		if (processInfo[head].time <= quantum) {
			quantumSum += processInfo[head].time;
			printf("%s %d\n", strAry[processInfo[head].strKey], quantumSum);
			if (head == count) {
				head = 0;
			}
			else {
				head++;
			}
		}
		else {
			processInfo[head].time -= quantum;
			processInfo[tail].time = processInfo[head].time;
			processInfo[tail].strKey = processInfo[head].strKey;
			if (head == count) {
				head = 0;
			}
			else {
				head++;
			}
			if (tail == count) {
				tail = 0;
			}
			else {
				tail++;
			}
			quantumSum += quantum;
		}
	}
}