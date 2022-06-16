#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @a: Stiring to encode
 * Return: pointer to a
 */
char *rot13(char *a)
{
int i, j;

for (i = 0; a[i] != '\0'; i++)
{
for (j = 0; a[j] != '\0' && (a[j] >= 'A' && a[j] <= 'z') && (a[j] != '[' || a[j] != '\\' || a[j] != ']' || a[j] != '^' || a[j] != '_' || a[j] != '`'); j++)
{
if ((a[i] >= 'a' && a[i] <= 'm') || (a[i] >= 'A' && a[i] <= 'M'))
{
a[i] += 13;
}
else
{
a[i] -= 13;
}
j++;
i++;
}
}
return (a);
}
