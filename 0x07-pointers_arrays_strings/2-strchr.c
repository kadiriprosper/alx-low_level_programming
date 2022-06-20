#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: The string to search
 * @c: The character to search for
 * Return: pointer to the first occurrence of c in s
 */

char *_strchr(char *s, char c)
{
char null[] = "NULL";
char *nullguy = null;
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
return (nullguy);
}
