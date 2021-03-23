#include "2.h"

int judgeOr(void) {
	int a;
	int b;
	int c;
	int output_a = 0;
	int output_b = 0;
	int output_c = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a < 1 || a> 10000) {
		return 0;
	}
	if (b < 1 || b > 10000) {
		return 0;
	}
	if (c < 1 || c > 10000) {
		return 0;
	}
	output_a = a;
	output_b = b;
	output_c = c;
	if (a > b) {
		output_a = b;
		output_b = a;
		a = output_a;
		b = output_b;
	}
	if (b > c) {
		output_b = c;
		output_c = b;
		b = output_b;
		c = output_c;
	}
	if (a > b) {
		output_a = b;
		output_b = a;
		a = output_a;
		b = output_b;
	}
	printf("%d %d %d\n", output_a, output_b, output_c);

    return 0;
}