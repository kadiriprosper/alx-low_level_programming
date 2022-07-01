#include "main.h"

/**
 * _strstr - lacates a substring
 * @haystack: pointer to haystack
 * @needle: pointer to needle
 * Return: pointer to begining of substring
 */
char *_strstr(char *haystack, char *needle)
{
char *ans = haystack, *ans2 = needle;

while (*haystack)
{
while (*needle)
{
if (*haystack++ != *needle++)
break;
}
if (!*needle)
return (ans);
needle = ans2;
ans++;
haystack = ans;
}
return (0);
}
