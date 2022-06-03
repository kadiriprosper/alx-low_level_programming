#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
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
int y = write(n, '\%', 15);
putchar(y + '0');
n++;
}
putchar('\n');
return(0);
}
