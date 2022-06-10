#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints the numbers, from 0 to 9
 *
 * Return: void
 */
void more_numbers(void)
{
int i = 0;
int j = 0;
while (i <= 10)
{
_putchar(i + '0');
if (i == 10)
{
i = 1;
_putchar(i + '0');
while (j <= 4)
{
_putchar(i + '0');
j++;
}
break;
}
i++;
}
_putchar('\n');
}
