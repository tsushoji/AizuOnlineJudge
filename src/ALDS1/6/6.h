#ifndef ALDS1_6_H_
#define ALDS1_6_H_

/*============================================================================*/
/* include */
/*============================================================================*/
#include <stdio.h>
#include <stdbool.h>

/*============================================================================*/
/* typedef */
/*============================================================================*/
typedef struct
{
	char mark;
	int num, id;
} StableCardData;

/*============================================================================*/
/* define */
/*============================================================================*/
#define COUNTING_SORT_ARY_SIZE (2000000)
#define COUNTING_SORT_UP_NUM (10001)
#define PARTITION_ARY_SIZE (100000)
#define QUICK_SORT_ARY_SIZE (100000)

/*============================================================================*/
/* enum */
/*============================================================================*/

/*============================================================================*/
/* struct */
/*============================================================================*/

/*============================================================================*/
/* func */
/*============================================================================*/

/*============================================================================*/
/* extern(val) */
/*============================================================================*/

/*============================================================================*/
/* extern(func) */
/*============================================================================*/

/*============================================================================*/
/* Macro */
/*============================================================================*/
void countingSort(void);
void partition(void);
void quickSort(void);

#endif

