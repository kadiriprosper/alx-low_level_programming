#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string parameter
 *
 * Retur: void
 */
void rev_string(char *s)
{
	int i, j, k;
	char m, n;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	j = i - 1;
	k = j / 2;
	while (k >= 0)
	{
		m = s[j - k];
		n = s[k];
		s[k] = m;
		s[j - k] = n;
		k--;
	}
}
