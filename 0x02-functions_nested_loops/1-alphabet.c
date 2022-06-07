#include <stdio.h>
#include "main.h"
void print_alphabet(void)
{
    int a = 97;
    while (a < 122)
    {
        putchar(a + '0');
    }
}