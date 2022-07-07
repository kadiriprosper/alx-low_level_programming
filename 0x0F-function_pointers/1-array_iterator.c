#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given as a parameter
 * @array: array parameter
 * @size: size of array
 * @action: pointer to the function you need to use
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (!action || !array)
return;
for (i = 0;  i < size; i++)
action(array[i]);
}
