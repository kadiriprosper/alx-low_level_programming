#include <stdio.h>
/**
 * main - prints value to the stderr
 *
 * Return: 1
 */
int main(void)
{
	fwrite("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 65, 1, stderr);
	return (1);
}
