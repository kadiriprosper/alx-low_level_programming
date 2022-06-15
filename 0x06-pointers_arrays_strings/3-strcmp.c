#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if equal, 1 if s1 > s2, -1 if s1 < s2
 */
int _strcmp(char *s1, char *s2)
{
int i;

i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] > s2[i])
return (15);
if (s1[i] < s2[i])
return (-15);
i++;
}
if (s1[i] == '\0' && s2[i] != '\0')
return (-15);
if (s1[i] != '\0' && s2[i] == '\0')
return (15);
return (0);
}
