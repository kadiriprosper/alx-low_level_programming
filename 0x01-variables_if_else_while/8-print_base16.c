#include <stdio.h>
#include <stdlib.h>
/**
 * main - print 0 - F
 *
 * Return: 0
 */
int main(void)
{
int n = 0;

while (n <= 15)
{
putchar('%x' + n);
n++;
}
putchar('\n');
return(0);
}
