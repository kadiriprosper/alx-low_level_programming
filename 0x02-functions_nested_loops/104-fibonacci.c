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
printf("%.0Lf, ", a);
printf("%.0Lf, ", b);
while (n < 96)
{
sum = a + b;
a = b;
b = sum;
if (n < 95)
{
printf("%lu, ", (unsigned long)sum);
}
else
{
printf("%lu\n", (unsigned long)sum);
}
n++;
}
return (0);
}
