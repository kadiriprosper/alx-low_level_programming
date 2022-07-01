#include <stdio.h>
/**
 * main - prints a combination of two digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int a = 48;
	int b = 48;
	int counter = 48;

	while (counter != 58)
	{
		while (b != 58)
		{
			if (b > a)
			{
				putchar(a);
				putchar(b);
				if (a != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		a++;
		b = 48;
		counter++;
	}
	putchar('\n');
	return (0);
}
