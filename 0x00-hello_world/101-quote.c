#include <stdio.h>
/**
 * main - prints value to the stderr
 *
 * Return: 1
 */
int main(void)
{
	int start = 1;
	int end = start + 58;
char msg[60] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(msg, end, start, stderr);
	return (1);
}
