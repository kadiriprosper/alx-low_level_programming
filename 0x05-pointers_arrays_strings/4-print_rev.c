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
int j = 0;
int len = 0;
int p = 0;

while (s[len] != '\0')
{
len++;
}
p = len;
while (i < len)
{
putchar(s[len - 1]);
len--;
}
if(p > 1)
{
putchar(s[j]);
}
putchar('\n');
}
