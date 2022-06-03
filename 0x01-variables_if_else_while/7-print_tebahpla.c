#include <stdio.h>
/**
 * main - Prints z - a
 *
 * Return: 0
 */

int main(void)
{
int n = 122;

while (n >= 97)
{
char lc_char = n;

putchar(lc_char);
n--;
}
putchar('\n');
return (0);
}
