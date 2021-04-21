#include "10.h"

int fib(int n);

void fibonacciNumber(void){
    int num;
    scanf("%d", &num);
    printf("%d\n", fib(num));
}

int fib(int n){
    int memo[FIBONACCI_ARY_SIZE] = {1, 1};
    for(int i = 2; i <= n; i++){
        memo[i] = memo[i - 1] + memo[i - 2];
    }
    return memo[n];
}