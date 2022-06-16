#include "main.h"
#include <stdio.h>

/**
 * print_number - prints a number
 * @n: number to print
 * Return: void
 */
void print_number(int n)
{
if (n < 0)
{
putchar('-');
n *= -1;
}
if (n / 10 != 0)
{
print_number(n / 10);
}
putchar(n % 10 + '0');
}
