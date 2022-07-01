#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: parameter
 * @s2: parameter
 * @n: unsigned integer parameter
 * Return: pointer to destination string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
unsigned int var1 = 0, var2 = 0, i;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[var1] != '\0')
var1++;
while (s2[var2] != '\0')
var2++;
if (n > var2)
n = var2;
p = malloc((var1 + n + 1) * sizeof(char));

if (p == NULL)
return (0);
for (i = 0; i < var1; i++)
p[i] = s1[i];
for (; i < (var1 + n); i++)
p[i] = s2[i - var1];
p[i] = '\0';
return (p);
}
