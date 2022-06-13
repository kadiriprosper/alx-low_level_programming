#include "main.h"

/**
 * rev_sting - Reverses a string
 * @s: string to reverse
 * Return: void
 */
void rev_string(char *s)
{
int p = 0;
int length = 0;
while (s[length] != '\0')
{
length++;
}

char *a[length];

while (s[length] != '\0')
{
a[p] = &s[length];
length--;
p++;
}
s = *(a);
}
