#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to check length
 * Return: length
 */
int _strlen(char *s)
{
int length = *(&s + 1) - s;
return length;
}
