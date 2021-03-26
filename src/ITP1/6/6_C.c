#include "6.h"

void buildingFloorDisplay(void)
{
	int count;
	int building;
	int floor;
	int x;
	int regidentsNum;
	int inf[15][10] = { 0 };

	scanf("%d", &count);
	for (int i = 0; i < count; i++)
	{
		scanf("%d %d %d %d", &building, &floor, &x, &regidentsNum);
		inf[4 * (building - 1) + floor - 1][x - 1] += regidentsNum;
	}
	for (int p = 0; p < 15; p++) {
		for (int q = 0; q < 10; q++) {
			if (p % 4 == 3) {
				printf("##");
			}
			else {
				printf(" %d", inf[p][q]);
			}
		}
		printf("\n");
	}
}