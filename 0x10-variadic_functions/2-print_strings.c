#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
    unsigned int a;
    char * p;

    va_list ptr;

    va_start(ptr, n);

    for (a = 0; a < n; a++)
    {
        if (separator != NULL && separator[0] != '\0')
        {
            itoa(va_arg(ptr, unsigned int), p, 10);
            if (p != NULL)
            {   
                printf("%s%s", p, separator);
            }
            else
            {
                printf("(nil)%s", separator);
            }
        }
    }
    printf("\n");
}

int main(void)
{
    print_strings(", ", 2, "Jay", "Django");
    return (0);
}