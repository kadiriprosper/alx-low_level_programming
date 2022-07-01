#include <stdio.h>
#include <stdlib.h>
/**
 * main - functions that multiiplies two number
 * @argv: argument value
 * @argc: argument count
 * Return: 1 if error and 0 success
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
}
