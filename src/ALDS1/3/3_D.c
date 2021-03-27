#include "3.h"

void areasOnTheCrossSectionDiagram(void)
{
	int firstStack[AREAS_STACK_ARY_SIZE];
	int firstTop = 0;
	SecondStack secondStack[AREAS_STACK_ARY_SIZE];
	int secondTop = 0;
	int temp, j;
	int sum = 0;
	char inputStr[AREAS_STACK_ARY_SIZE];
	scanf("%s", inputStr);
	int i = 0;
	while(inputStr[i] != '\0'){
		if(inputStr[i] == '\\'){
			firstStack[firstTop] = i;
			firstTop++;
		}else if(inputStr[i] == '/' && firstTop > 0){
			firstTop--;
			j = firstStack[firstTop];
			temp = i - j;
			sum += temp;
			while(secondStack[secondTop - 1].popIndex >j){
				secondTop--;
				temp += secondStack[secondTop].area;
			}
			secondStack[secondTop].area = temp;
			secondStack[secondTop].popIndex = j;
			secondTop++;
		}
		i++;
	}
	printf("%d\n", sum);
	printf("%d" , secondTop);
	for(int k = 0; k < secondTop; k++){
		printf(" %d", secondStack[k].area);
	}
	printf("\n");
}