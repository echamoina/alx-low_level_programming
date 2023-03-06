#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locate a substring
 * @haystack: Pointer to string to search
 * @needle: Pointer to substring to locate
 * Return: Pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int i, j, k;
if (*needle == '\0')
return (haystack);
for (i = 0; haystack[i] != '\0'; i++)
{
if (haystack[i] == needle[0])
{
k = i;
for (j = 0; needle[j] != '\0' && haystack[k] == needle[j]; j++, k++)
;
if (needle[j] == '\0')
return (haystack + i);
}
}
return (NULL);
}

