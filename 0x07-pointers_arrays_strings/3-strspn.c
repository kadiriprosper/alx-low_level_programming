#include "main.h"

/**
 * _strspn - locates a character in a string
 *
 * @s: The string to search
 * @accept: The characters to search for
 *
 * Return: the number of characters in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, k;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
for (k = 0; accept[k] != '\0'; k++)
{
if (s[i] != accept[k])
{
return (i);
}
}
}
}
}
return (i);
}
