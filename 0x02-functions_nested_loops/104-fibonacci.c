#include <stdio.h>

/**
 * main - prints the first 98fibonacci starting with 1 and 2
 *
 * Return: 0
 */

int main(void)
{
unsigned long long a = 1;
unsigned long long b = 2;
unsigned long long sum = 0;
unsigned long long n = 0;
printf("%llu, ", a);
printf("%llu, ", b);
while (n < 96)
{
sum = a + b;
a = b;
b = sum;
if (n < 95)
{
printf("%llu, ", sum);
}
else
{
printf("%llu\n", sum);
}
n++;
}
return (0);
}
