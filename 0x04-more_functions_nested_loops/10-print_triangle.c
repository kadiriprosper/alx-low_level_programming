#include "main.h"

/**
 * print_triangle - prints a triangle of #
 *
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
int i, j, k;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
if (j <= size - i)
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
_putchar('\n');
}
}
}
