#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string to the standard output in reverse.
 * @s: string to print
 * Return: void
 */
void print_rev(char *s)
{
int i = 1;
int len = 0;
while (s[len] != '\0')
{
len++;
}
while (i < len)
{
putchar(s[len - 2]);
len--;
}
putchar(s[i]);
putchar('\n');
}
