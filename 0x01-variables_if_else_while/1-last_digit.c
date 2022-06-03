#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Prints the last digit of a random number
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	char num_string[5];

	scanf(num_string, "%d", n);
	char last_num[1] = num_string[5];
	if (atoi(last_num) > 5)
	{
		printf("Last digit of,%d, is, %c and is greater than 5", n, last_num);
	} else if (atoi(last_num) == 0)
	{
		printf("Last digit of,%d, is, %c and is 0", n, last_num);
	} else if (atoi(last_num) < 6 && atoi(last_num) != 0)
	{
		printf("Last digit of,%d, is, %c and is less than 6 and not 0", n, last_num);
	}
	return (0);
}
