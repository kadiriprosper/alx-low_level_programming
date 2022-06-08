#include <stdio.h>

/**
 * main - prints the first 50 fibonacci starting with 1 and 2
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
while (n < 48)
{
sum = a + b;
a = b;
b = sum;
if ((sum > 4000000) && (sum % 2 == 0))
{
    printf("%ld, ", sum);
}
n++;
}
return (0);
}
