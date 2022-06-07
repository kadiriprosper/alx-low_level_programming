#include "main.h"
#include <stdlib.h>
/**
 * print_to_98 - prints from n - 98
 * 
 * @n: from n
 */

void print_to_98(int n)
{
int a = 0;
if (n > 98)
{
while (n != 98)
{
char c = n + '0';
_putchar(c);
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
n--;
}
}
else if(n < 98)
{
while (n != 98)
{
char c = n + '0';
_putchar(c);
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
n++;
}

}else
{
char c = n + '0';
_putchar(c);
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
