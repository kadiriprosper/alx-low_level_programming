#include "main.h"

/**
 * print_Array - prints an array of integers
 * @a: array of integers
 * Return: void
 */
void print_Array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
_putchar(a[i] + '0');
if (i != n - 1)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
