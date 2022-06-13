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
int len = _strlen(s);

while (i < len)
{
putchar(s[len - 1]);
len--;
}
}
