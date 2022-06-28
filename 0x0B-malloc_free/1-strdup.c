#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: pointer to string
 * Return: pointer to duplicated string
 */
char *_strdup(char *str)
{
char *dup;
unsigned int i, j;

if (str == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
;
dup = (char *)malloc(sizeof(char) * (i + 1));
if (dup == NULL)
return (NULL);
for (j = 0; j < i; j++)
dup[j] = str[j];
return (dup);
}
