#include "main.h"

/**
 * string_toupper - converts a string to uppercase
 * @str: string to convert
 * Return: pointer to str
 */
char *string_toupper(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] = str[i] - 32;
}
return (str);
}
