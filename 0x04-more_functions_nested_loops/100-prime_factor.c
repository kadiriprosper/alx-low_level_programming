#include <stdio.h>

/**
 * main -  prints the pirime factors of 612852475143
 * 
 * Return: 0
 */
int main(void)
{
    long i = 0;
    long j = 0;
    long y = 612852475143;
    while (i < y)
    {
        if (y % i == 0){
            j = i;
        }
        i++;
    }
    printf("%ld", j);
    return (0);
}