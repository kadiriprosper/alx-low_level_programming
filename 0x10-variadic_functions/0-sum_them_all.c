#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - returns the sum of the numbers
 *
 * @n: variadic parameter
 * @...: remaining params
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;

va_list ptr;

va_start(ptr, n);
if (n == 0){
return (0);
}
for (int i = 0; i < n; i++)
sum += va_arg(ptr, unsigned int);

va_end(ptr);

return (sum);
}