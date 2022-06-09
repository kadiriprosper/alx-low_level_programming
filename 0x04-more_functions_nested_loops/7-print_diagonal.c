#include "main.h"

/**
 * print_diagonal - print a diagonal of n characters
 *
 * @n: Param length
 * Return: void
 */

void print_diagonal(int n)
{
int i, j;

for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}