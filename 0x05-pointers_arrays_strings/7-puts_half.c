#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: string to print
 */
void puts_half(char *str)
{
int i = 0;
int p = 0;
int j = 0;

while (str[i] != '\0')
{
i++;
}

if (i % 2 != 0)
{
i = (i - 1) / 2;
}
else
{
i = i / 2;
}
j = i;
p = i * 2;

while (j <= p)
{
_putchar(str[j]);
j++;
}
_putchar('\n');
}
