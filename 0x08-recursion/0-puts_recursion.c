#include "main.h"

/**
 * _puts_recursion - reverse
 * @s: pointer to string params
 *
 */

void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
}
