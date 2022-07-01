#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: size in bytes
 * @c: character parameter
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;

if (size == 0)
return (NULL);
arr = malloc(sizeof(c) * size);
if (arr == NULL)
return (NULL);
for (i = 0; i < size; i++)
arr[i] = c;
return (arr);
}
