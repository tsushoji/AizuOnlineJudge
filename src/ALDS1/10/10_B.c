#include "10.h"

void matrixChainMultiplication(void){
    int mat[MATRIX_ARY_SIZE];
    int num;
    int lastMat;
    scanf("%d", &num);
    for(int i = 0; i < num; i++){
        scanf("%d %d", &mat[i], &lastMat);
    }
    mat[num] = lastMat;
    long memo[MATRIX_ARY_SIZE][MATRIX_ARY_SIZE];
    int tmpVal;
    for(int i = 0; i <= num; i++){
        memo[i][i] = 0;
    }
    for(int l = 2; l <= num; l++){
        for(int m = 1; m <= num - l + 1; m++){
            int n = m + l - 1;
            memo[m][n] = 10000000000;

            for(int k = m; k < n; k++){
                tmpVal = memo[m][k] + memo[k + 1][n] + mat[m - 1] * mat[k] * mat[n];
                if(tmpVal < memo[m][n]){
                    memo[m][n] = tmpVal;
                }
            }
        }

    }
    printf("%ld\n", memo[1][num]);
}
