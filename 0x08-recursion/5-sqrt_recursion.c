#include "main.h"

/**
 * _sqrt_recursion = returns the natural square root of a number
 * @n: integer parameter
 * Return: sqaure root on n
 */

int _sqrt_recursion(int n)
{
return(_squareRoot(n, 1));
}

/**
 * _squareRoot - prototype
 * @n: integer Parameter
 * @i: integer parameter
 * Return: square root
 */
int _squareRoot(int n, int i)
{
if (n < 0)
{
return (-1);
}
if ((i * i) > n)
{
return (-1);
}
if (i * i == n)
{
return (i);
}
return (_squareRoot(n, i + 1));
}
