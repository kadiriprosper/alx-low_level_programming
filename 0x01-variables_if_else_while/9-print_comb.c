#include <stdio.h>
/**
 * main - prints the combo of 2 single digit num
 *
 *  Return: 0
 */
int main(void)
{
int a = 0;
while (a < 10)
{
putchar(a + '0');
putchar(',');
putchar(' ');
a++;
}
putchar('\n');
}
