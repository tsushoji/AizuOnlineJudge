#include "common.h"

int getValMax(int *intAry, int count) {
	int intRtn = intAry[0];
	for (int i = 0; i < count; i++) {
		if (intRtn < intAry[i]) {
			intRtn = intAry[i];
		}
	}
	return intRtn;
}

int getValMin(int *intAry, int count) {
	int intRtn = intAry[0];
	for (int i = 0; i < count; i++) {
		 if (intRtn > intAry[i]) {
			 intRtn = intAry[i];
		 }
	}
	return intRtn;
}