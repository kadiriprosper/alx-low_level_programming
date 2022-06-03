#include <stdio.h>
/**
 * main - outputs a-z to the standard output
 *
 * Return: 0
 */
int main(void)
{
int n = 97;
while (n < 123)
{
char c = n;
putchar(c);
n++;
}
putchar('\n');
}
