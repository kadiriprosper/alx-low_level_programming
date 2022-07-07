#include <stdarg.h>
#include <stdio.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
int number = 0;

va_list ptr;

va_start(ptr, n);

for(int a = 0; a < n; a++)
{
if (*separator)
printf("%d%s", va_arg(ptr, int), separator);
else
printf("%d", va_arg(ptr, int));
}
printf("\n");
}
