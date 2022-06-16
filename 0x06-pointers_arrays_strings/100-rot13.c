#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @a: Stiring to encode
 * Return: pointer to a
 */
char *rot13(char *a)
{
int j;

for (j = 0; a[j] != '\0' && (a[j] >= 'A' && a[j] <= 'z') && (a[j] != '[' || a[j] != '\\' || a[j] != ']' || a[j] != '^' || a[j] != '_' || a[j] != '`'); j++)
{
if ((a[j] >= 'a' && a[j] <= 'm') || (a[j] >= 'A' && a[j] <= 'M'))
{
a[j] += 13;
}
else
{
a[j] -= 13;
}
j++;
}
return (a);
}
