#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @a: Stiring to encode
 * Return: pointer to a
 */
char *rot13(char *a)
{
int i;

for (i = 0; a[i] != '\0'; i++)
{
if (a[i] >= 'a' && a[i] <= 'm')
{
a[i] += 13;
}
else if (a[i] >= 'A' && a[i] <= 'M')
{
a[i] += 13;
}
else if (a[i] >= 'n' && a[i] <= 'z')
{
a[i] -= 13;
}
else if (a[i] >= 'N' && a[i] <= 'Z')
{
a[i] -= 13;
}
}
return (a);
}
