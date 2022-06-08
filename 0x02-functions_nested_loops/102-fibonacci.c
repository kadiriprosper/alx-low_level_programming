#include <stdio.h>

/**
 * main - prints the first 50 fibonacci starting with 1 and 2
 * 
 * Return: 0
 */

int main(void)
{
    int a = 1;
    int b = 2;
    int sum = 0;
    int n = 0;
    printf("%d, ", a);
    printf("%d, ", b);
    sum = a + b;
    while (n < 50)
    {
        printf("%d, ", sum);
        b = (sum - 1);
        sum += b;
        n++;
    }
    return (0);
}