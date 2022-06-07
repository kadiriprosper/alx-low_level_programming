#include "main.h"
/**
 * print_alphabet_x10 - prints out the alphabet
 *
 */

void print_alphabet_x10(void)
{
int a = 'a';
int n = 0;
while (n < 10)
{
    while (a < 'z')
    {
       _putchar(a);
        a++;
    }
n++;
}
}