#include <stdio.h>
/**
 *
 * _putchar - prints out the _putchar variable
 *
 */
void _putchar(char a)
{
putchar(a);
}

void print_alphabet(void)
{
    int a = 97;
    while (a < 122)
    {
        _putchar(a + '0');
        _putchar('\n');
    }
}