#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: The string to search
 * @c: The character to search for
 * Return: pointer to the first occurrence of c in s
 */

char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
{
return (s[i]);
}
i++;
}
return ('NULL');
}
