#include "0387.h"
/*============================================================================*/
/* global */
/*============================================================================*/
int descendingOrderQueue[PLATFORM_SIZE];
int queueSize = 0;

/*============================================================================*/
/* const */
/*============================================================================*/

/*============================================================================*/
/* prototype */
/*============================================================================*/
int main()
{
    int size[PLATFORM_SIZE];
    int top[PLATFORM_SIZE];
    int c[PASSENGER_ARY_SIZE];
    int N;
    int M;
    int k = 0;
    int sum = 0;

    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        scanf("%d", &M);
        size[i] = M;
        top[i] = k;
        for(int j = 0; j < M; j++){
            scanf("%d", &c[k++]);
        }
    }

    for(int i = N - 1; i >= 0; i--){
        M = size[i];
        k = top[i];
        for(int j = 0; j < M; j++){
            enqueue(c[k++]);
        }
        sum += descendingOrderQueue[0];
        dequeue();
    }
	return 0;
}

void enqueue(int c){
    // todo ヒープ学習
}

void dequeue(void){
    // todo ヒープ学習
}

