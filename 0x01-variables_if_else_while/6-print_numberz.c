#include <stdio.h>
/**
 * main - prints 0 - 9
 *
 * Return: 0
 */
int main(void)
{
int n = 0;
while (n <= 9)
{
char char_num = n + '0';
putchar(char_num);
n++;
}
putchar('\n');
}

