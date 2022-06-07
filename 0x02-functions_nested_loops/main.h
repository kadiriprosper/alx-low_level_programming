#include <stdio.h>
/**
 *
 * _putchar - prints out the _putchar variable
 *
 */
void _putchar(void)
{
printf("_putchar\n");
}

void print_alphabet(void)
{
    int a = 97;
    while (a < 122)
    {
        putchar(a + '0');
    }
}