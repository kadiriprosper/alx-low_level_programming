#include "main.h"

/**
 * main - prints out fizz buzz
 *
 * Return: 0
 */

int main(void)
{
int i = 1;
while (i <= 100)
{
if (i != 100)
{
if (i % 3 == 0 && i % 5 != 0)
{
printf("Fizz ");
}
else if (i % 5 == 0 && i % 3 != 0)
{
printf("Buzz ");
}
else if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
}
else
{
printf("%d ", i);
}
}
else
{
printf("Buzz");
}
i++;
}
printf("\n");
return (0);
}
