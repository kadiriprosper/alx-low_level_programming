#include "main.h"
#include "_putchar.c"


/**
 * print_most_numbers - prints the numbers, from 0 to 9, except 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
int i;

while (i < '10')
{
if (i != '2' && i != '4')
{
_putchar(i);
}
i++;
}
_putchar('\n');
}
