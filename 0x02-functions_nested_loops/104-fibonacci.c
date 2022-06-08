#include <stdio.h>

/**
 * main - prints the first 98fibonacci starting with 1 and 2
 *
 * Return: 0
 */

int main(void)
{
long double a = 1;
long double b = 2;
long double sum = 0;
long double n = 0;
printf("%Lf, ", a);
printf("%Lf, ", b);
while (n < 96)
{
sum = a + b;
a = b;
b = sum;
if (n < 95)
{
printf("%Lf, ", sum);
}
else
{
printf("%Lf\n", sum);
}
n++;
}
return (0);
}
