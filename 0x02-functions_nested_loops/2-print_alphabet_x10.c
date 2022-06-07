#include "main.h"
/**
 * print_alphabet_x10 - prints out the alphabet
 *
 */

void print_alphabet_x10(void)
{
int a = 97;
int n;
for(n = 0; n < 10; n++)
{
    while (a < 123)
    {
       _putchar(a);
        a++;
    }
}
}