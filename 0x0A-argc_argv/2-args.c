#include <stdio.h>
#include "main.h"

/**
 * main - prints all the argument it reveives
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
int i = 0;

while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
