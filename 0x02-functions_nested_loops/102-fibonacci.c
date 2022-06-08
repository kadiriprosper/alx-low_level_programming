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
    while (n < 50)
    {
        sum += (a + b);
        printf("%d, ", sum);
        a++;
        b++;
        n++;
    }
    return (0);
}