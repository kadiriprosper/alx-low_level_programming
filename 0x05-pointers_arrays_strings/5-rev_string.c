#include "main.h"
#include<stdlib.h>

/**
 * rev_string - Reverses a string
 * @s: string to reverse
 * Return: void
 */
void rev_string(char *s)
{
char *a;
int i;
int l = 0;
int p = 0;
while (s[l] < '\0')
{
l++;
}
ptr = (char*)malloc(l*sizeof(char));
for (i = 0; l > 0; l--)
{
a[i] = s[l];
i++;
}
a[i] = '\0';
while (a[p] != '\0')
{
s[p] = a[p];
p++;
}
s[p] = '\0';
}

