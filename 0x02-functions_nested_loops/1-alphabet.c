#include <stdio.h>
#include "main.h"

void print_alphabet(void)
{
    int a = 97;
    while (a < 122)
    {
        _putchar(a + '0');
    }
}