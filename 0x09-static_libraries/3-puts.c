#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string to the standard output.
 * @str: string to print
 * Return: void
 */
void _puts(char *str)
{
while (*str)
putchar(*str++);
putchar('\n');
}
