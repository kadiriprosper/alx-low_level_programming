#include "main.h"

/**
 * _isupper - check if character is uppercase
 *
 * @c: character to check
 * Return: 1 if uppercase, 0 if not
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
