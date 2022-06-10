#include "main.h"
/**
 * print_number - prints an int
 * @n: yummy
 * Return: 0
 */

void print_number(int n)
{
int i;

if (n < 0)
{
_putchar('-');
n = -n;
}
if (n == 0)
{
_putchar('0');
}
else
{
for (i = 1; i != n; i *= 10)
{
_putchar((n / i) % 10 + '0');
}
}
}
