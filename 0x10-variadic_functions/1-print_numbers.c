#include <stdarg.h>
#include <stdio.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int a;

va_list ptr;

va_start(ptr, n);

for (a = 0; a < n; a++)
{
if (*separator)
printf("%d%s", va_arg(ptr, int), separator);
}
printf("\n");
}
