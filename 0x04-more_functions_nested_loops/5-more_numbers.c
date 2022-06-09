#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints the numbers, from 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
int i;
int j = 0;

while (j <= 10)
{
for (i = 0; i <= 14; i++)
{
printf("%d", i);
}
printf("\n");
j++;
}
}
