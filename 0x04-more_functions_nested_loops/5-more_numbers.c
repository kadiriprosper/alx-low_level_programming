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
while (i < 15)
{
if (i >= 10)
{
_putchar (1 + '0');
}
else
{
j = i % 10;
_putchar(j + '0');
}
i++;
}
_putchar('\n');
}
