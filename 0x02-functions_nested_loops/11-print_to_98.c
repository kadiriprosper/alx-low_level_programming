#include "main.h"
#include <stdlib.h>
/**
 * print_to_98 - prints from n - 98
 * 
 * @n: from n
 */

void print_to_98(int n)
{
int i;

if (n < 98)
{
for (i = n; i <= 98; i++)
{
printf("%d, ", i);
}
}
else
{
for (i = n; i >= 98; i--)
{
printf("%d, ", i);
}
}
printf("\n");
}
