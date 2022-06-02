#include <stdio.h>
/**
 * main - prints the size of a bunch of data types
 *
 * Return: 0
 */
int main(void)
{
	printf("Size of a char:%2lu byte(s)\n", sizeof(char));
	printf("Size of an int:%2lu byte(s)\n", sizeof(int));
	printf("Size of a long int:%2lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int:%2lu byte(S)\n", sizeof(long long int));
	printf("Size of a float:%2lu byte(s)\n", sizeof(float));
	return (0);
}
