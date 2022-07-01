#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints a chessboard
 * @a: pointer to the first row of the board
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
if (j == 0)
printf("%c", a[i][j]);
else
printf("%c", a[i][j]);
}
printf("\n");
}
}
