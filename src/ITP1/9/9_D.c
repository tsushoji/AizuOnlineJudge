#include "9.h"

void threeOperationDisplay(void)
{
	char ch[1000];
	char resultCh[1000];
	int count;
	int k, l;
	int firstArgs = 0;
	int secondArgs = 0;
	scanf("%s", ch);
	int len = strlen(ch);
	scanf("%d", &count);
	while (count--) {
		char chOp[10];
		scanf("%s %d %d", &chOp, &firstArgs, &secondArgs);
		if (chOp[2] == 'p') {
			char chArgs[1001];
			scanf(" %s", chArgs);
			for (int m = 0; chArgs[m] != '\0'; m++) {
				ch[firstArgs + m] = chArgs[m];
			}
			
		}
		else if (chOp[2] == 'v') {
			for (l = firstArgs, k = secondArgs; l <= secondArgs; k--, l++) {
				resultCh[l] = ch[k];
			}
			for (int i = firstArgs; i <= secondArgs; i++) {
				ch[i] = resultCh[i];
			}
		}
		else if (chOp[2] == 'i') {
			for (int j = firstArgs; j < secondArgs; j++) {
				printf("%c", ch[j]);
			}
			printf("%c\n", ch[secondArgs]);
			continue;
		}
		else {
			continue;
		}
	}
}