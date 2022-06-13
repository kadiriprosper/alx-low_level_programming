#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string to the standard output in reverse.
 * @s: string to print
 * Return: void
 */
void print_rev(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
while (i >= 0)
{
_putchar(s[i]);
i--;
}
}
