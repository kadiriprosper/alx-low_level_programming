#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints the numbers, from 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
int i = 0;
int j = 0;
while (i <= 10)
{
if(i == 10){
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
return (0);
}
