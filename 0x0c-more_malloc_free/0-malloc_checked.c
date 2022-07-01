#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * malloc_checked - allocates mamory using malloc
 * @b: integer parameter
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *val;

val = malloc(b);
if (val == NULL)
exit(98);
else
return (val);
}
