#include <stdio.h>

/**
 * main - prints the first 98fibonacci starting with 1 and 2
 *
 * Return: 0
 */

int main(void)
{
unsigned long a = 1ul;
unsigned long b = 2ul;
unsigned long sum = 0ul;
unsigned long n = 0ul;
printf("%lu, ", a);
printf("%lu, ", b);
while (n < 96)
{
sum = a + b;
a = b;
b = sum;
if (n < 95)
{
printf("%lu, ", sum);
}
else
{
printf("%lu\n", sum);
}
n++;
}
return (0);
}
