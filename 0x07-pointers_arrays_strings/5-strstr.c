#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: The string to search
 * @needle: The substring to search for
 * Return: pointer to the first occurrence of needle in haystack
 */

char *_strstr(char *haystack, char *needle)
{
int i, j, k;

char null[] = "NULL";
char *nullguy = null;


for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
{
break;
}
}
if (needle[j] == '\0')
{
return (haystack + i);
}
}
return (nullguy);
}
