#include "main.h"
#include <stdio.h>
/**
 * _abs - prints out the absolute value of a number
 *
 * @c: the character to be printed
 * Return: 0
 */
int _abs(int c)
{
if (c < 0)
{
int a = c * -1;
printf("%d", a);
}
else
{
printf("%d", c);
}
}
