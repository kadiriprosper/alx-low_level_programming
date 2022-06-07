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
int a = c % 10;
printf("%d\n", a);
return (a);
}
