#include "main.h"

/**
 * _isalpha - prints out the alphabet
 *
 * @c: character ti be printed
 * Return: 0 if c is not an alohabet
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
else
{
return (0);
}
}
