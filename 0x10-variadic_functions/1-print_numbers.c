#include <stdarg.h>
#include <stdio.h>


/**
 * print_numbers - returns the sum of the numbers
 *
 * @separator: number seperator
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
if (separator[0] != '\0')
printf("%i%s", va_arg(ptr, unsigned int), separator);
else
printf("%i", va_arg(ptr, unsigned int));
}
printf("\n");
}
