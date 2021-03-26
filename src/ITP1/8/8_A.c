#include "8.h"

void charInput(void)
{
	char ch;
	while (true) {
		scanf("%c", &ch);
		if (ch == '\n') {
			break;
		}
		if (isupper(ch)) {
			printf("%c", tolower(ch));
		}
		else if (islower(ch)) {
			printf("%c", toupper(ch));
		}
		else {
			printf("%c", ch);
		}
	}
	printf("\n");
}