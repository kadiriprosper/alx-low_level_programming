#include "main.h"

/**
 * cap_stirng - capitalizes all words of a string
 * @str: string to capitalize
 * Return: pointer to str
 */
char *cap_stirng(char *str)
{
int i, j;
char *aux;

aux = str;
for (i = 0; str[i]; i++)
{
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
{
for (j = i + 1; str[j] && str[j] != ' ' && str[j] != '\t' && str[j] != '\n'; j++)
{
str[j] = toupper(str[j]);
}
}
}
return (aux);
}
