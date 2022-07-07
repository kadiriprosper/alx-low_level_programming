#include <stdarg.h>

/**
 * sum_them_all - returns the sum of the numbers
 * 
 * @n: variadic parameter
 * @...: remaining params
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int  sum = 0;

va_list ptr;

va_start(ptr, n);

for (int i = 0; i < n; i++)
{
sum += va_arg(ptr, unsigned int);
}

va_end(ptr);

return sum;
}
