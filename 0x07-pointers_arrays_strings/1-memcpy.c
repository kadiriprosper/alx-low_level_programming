#include "main.h"

/**
 * _memcpy - fill memory with a constant byte
 * @dest: The memory area to fill
 * @src: The byte to fill it with
 * @n: The number of bytes to fill
 * Return: pointer to s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
