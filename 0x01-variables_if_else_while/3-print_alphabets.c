#include <stdio.h>
/**
 * main - prints a-z then A-z
 *
 * Return: 0
 */
int main(void)
{
int lc = 97;
int uc = 65;
int endlc = 122;
int enduc = 90;
while (lc <= endlc)
{
char char_lc = lc;
putchar(char_lc);
lc++;
}
while (uc <= enduc)
{
char char_uc = uc;
putchar(char_uc);
uc++;
}
putchar('\n');
return(0);
}
