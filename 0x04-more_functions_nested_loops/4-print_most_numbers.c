#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - prints the numbers, from 0 to 9, except 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
int i;

while (i <= '9')
{
if (i != '2' && i != '4')
{
printf("%d", i);
}
i++;
}
printf("\n");
}
