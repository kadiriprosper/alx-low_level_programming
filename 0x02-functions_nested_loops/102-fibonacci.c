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
    printf("%d, ", a);
    printf("%d, ", b);
    while (n < 50)
    {
        sum = a + b;
        a = b;
        b = sum;
        printf("%d, ", sum);
        n++;
    }
    return (0);
}