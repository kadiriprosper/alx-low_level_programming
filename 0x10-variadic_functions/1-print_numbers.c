#include <stdarg.h>
#include <stdio.h>


/**
 * print_numbers - returns the sum of the numbers
 *
 * @seperator: number seperator
 * @n: variadic parameter
 * @...: remaining params
 * Return: sum
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int a;

va_list ptr;

va_start(ptr, n);

for (a = 0; a < n; a++)
{
if (*separator)
printf("%d%s", va_arg(ptr, int), separator);
else
printf("%d", va_arg(ptr, int));
}
printf("\n");
}
