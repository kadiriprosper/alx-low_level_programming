#include <stdio.h>

/**
 * main - prints a-z skipping q and e
 *
 * Return: 0;
 */
int main(void)
{
	int lc = 97;
	int endlc = 122;

	while (lc <= endlc)
	{
		if (lc != 101 && lc != 113)
		{
			char char_lc = lc;

			putchar(char_lc);
		}
		lc++;
	}
	putchar('\n');
	return (0);
}
