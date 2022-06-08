#include <stdio.h>

/**
 * main - prints the first 98fibonacci starting with 1 and 2
 *
 * Return: 0
 */

int main(void)
{
long a = 1l;
long b = 2l;
long sum = 0l;
long n = 0l;
printf("%ld, ", a);
printf("%ld, ", b);
while (n < 96)
{
sum = a + b;
a = b;
b = sum;
if (n < 95)
{
printf("%ld, ", sum);
}
else
{
printf("%ld\n", sum);
}
n++;
}
return (0);
}
