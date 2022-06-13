#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: string to print
 */
void puts_half(char *str)
{
int i = 0;
int p = 0;

while (str[i] != '\0')
{
i++;
}
i = i / 2;
p = (i * 2);
while (i <= p)
{
_putchar(str[i]);
i++;
}
}
