#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonal numbers
 * @a: pointer
 * @size: size of the square
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int i, var1 = 0, var2 = 0;

for (i = 0; i < size; i++)
{
var1 += *(a + (size * i + i));
var2 += *(a + (size * i + size - 1 - i));
}
printf("%d, ", var1);
printf("%d\n", var2);
}
