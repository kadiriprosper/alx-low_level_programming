#include "main.h"

/**
 * cap_stirng - capitalizes all words of a string
 * @str: string to capitalize
 * Return: pointer to str
 */
char *cap_string(char *str)
{
int i, j;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] == ' ' || str[i] == '\t')
{
for (j = i + 1; str[j] != '\0'; j++)
{
if (str[j] >= 'a' && str[j] <= 'z')
str[j] = str[j] - 32;
}
}
else
{
str[i] = str[i] - 32;
}
}
return (str);
}
