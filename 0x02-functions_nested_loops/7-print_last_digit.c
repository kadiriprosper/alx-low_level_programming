#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints out the absolute value of a number
 *
 * @c: the int to be worked with
 * Return: 0
 */

int print_last_digit(int c)
{
int last_digit;

last_digit = c % 10;
if (last_digit < 0)
{
last_digit = last_digit * -1;
}
printf("%d\n", last_digit);
return (last_digit);
}
