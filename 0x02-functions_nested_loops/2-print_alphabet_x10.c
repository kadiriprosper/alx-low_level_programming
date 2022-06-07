#include "main.h"
/**
 * print_alphabet_x10 - prints out the alphabet
 *
 */

void print_alphabet_x10(void)
{
int a = 97;
int n = 0;
while (n < 10)
{
    while (a < 123)
    {
       _putchar(a);
        a++;
    }
_putchar('\n');
n++;
}
}