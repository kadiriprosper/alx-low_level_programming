#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: pointer to s
 * @accept: pointer to accept
 * Return: pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
int i;

while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}
return (NULL);
}
