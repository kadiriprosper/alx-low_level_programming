#include "main.h"

/**
 * rev_sting - Reverses a string
 * @s: string to reverse
 * Return: void
 */
void rev_string(char *s)
{
char *a = s;
int i = 1;
int j = 0;
int len = 0;
int p = 0;

while (s[len] != '\0')
{
len++;
}
p = len;
while (i < len)
{
a = s[len - 1];
len--;
}
s = a;
}
