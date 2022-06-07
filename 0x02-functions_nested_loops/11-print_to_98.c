#include "main.h"

/**
 * print_to_98 - prints from n - 98
 * 
 * @n: from n
 */

void print_to_98(int n)
{
n = 48;
while (n < 58)
{
_putchar(n + '0');
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
