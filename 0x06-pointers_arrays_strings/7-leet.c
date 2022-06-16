#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into 1337
 * @str: string to encode
 * Return: pointer to str
 */
char *leet(char *str)
{
int i, j;
char *leet_str = str;
char *leet_table = "aAeEoOtTlL";
char *leet_table_2 = "4433007711";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; leet_table[j] != '\0'; j++)
{
if (str[i] == leet_table[j])
{
leet_str[i] = leet_table_2[j];
}
}
}
return (leet_str);
}
