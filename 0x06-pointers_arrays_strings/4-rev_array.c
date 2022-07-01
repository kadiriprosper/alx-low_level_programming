#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: the array to be reversed
 * @n: number of bytes to copy
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i, j;

i = 0;
j = n - 1;
while (i < j)
{
a[i] = a[i] ^ a[j];
a[j] = a[i] ^ a[j];
a[i] = a[i] ^ a[j];
i++;
j--;
}
}
