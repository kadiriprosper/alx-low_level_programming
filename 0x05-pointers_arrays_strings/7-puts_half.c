#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: string to print
 */
void puts_half(char *str)
{
int i = 0;
int j = 0;

while (str[i] != '\0')
{
i++;
}
i = i / 2;
while (j < (i + i - 1))
{
j += i;
_putchar(str[j]);
}
_putchar('\n');
}
