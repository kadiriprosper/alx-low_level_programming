#include "main.h"
#include <stdio.h>
/**
 * _strlen - returns the length of a string
 * @s: string to check length
 * Return: length
 */
int _strlen(char *s)
{
char *a = &s;
int length = *(&s + 1) - s;
int new = sizeof(s);
return new;
}

int main(void)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}