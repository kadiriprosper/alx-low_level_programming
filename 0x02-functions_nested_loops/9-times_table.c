#include "main.h"

/**
 * times_table - prints the times table from 0 to 9
 *
 */
void times_table(void)
{
int i = 0;
int j = 0;

while (i < 10)
{
while (j < 10)
{
int final = i * j;
_putchar(final);
_putchar(',');
_putchar(' ');
j++;
}
j = 0;
i++;
}
