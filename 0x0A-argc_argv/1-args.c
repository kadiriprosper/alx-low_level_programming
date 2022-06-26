#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed
 * @argv: argument vector
 * @argc: argument count
 * Return: 0 success
 */
int main(int argc, char *argv[] _attribute_((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
