#include "main.h"
#include <stdlib.h>
/**
 * print_to_98 - prints from n - 98
 * 
 * @n: from n
 */

void print_to_98(int n)
{
char a = (char)(n);
while (a < 58)
{
_putchar(a);
_putchar(',');
_putchar(' ');
a++;
}
_putchar('\n');
}
