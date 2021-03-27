#ifndef ITP1_11_H_
#define ITP1_11_H_

/*============================================================================*/
/* include */
/*============================================================================*/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/*============================================================================*/
/* typedef */
/*============================================================================*/
#define DICE_ARY_SIZE (6)
typedef struct
{
	int face[DICE_ARY_SIZE];
} Dice;

/*============================================================================*/
/* define */
/*============================================================================*/
#define FIRST_DICE_ARY_SIZE (6)
#define FIRST_DICE_X_ARY_SIZE (3)
#define FIRST_DICE_Y_ARY_SIZE (3)
#define THIRD_DICE_ORDER "NNNNEEEE"

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
void fourOperationDiceGame(void);
void rightDiceNumDisplay(void);
void judgeFirstSameDice(void);
void setDice(Dice *pDice, char op);
void judgeSecondSameDice(void);

#endif

