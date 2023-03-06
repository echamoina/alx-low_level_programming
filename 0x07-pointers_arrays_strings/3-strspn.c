#include "main.h"
#include <stdio.h>

/**
 * _strspn - Get length of a prefix substring
 * @s: Pointer to string to search
 * @accept: Pointer to string of characters to match
 * Return: Number of bytes in the initial segment of s
 * consisting only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, count = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
count++;
break;
}
}
if (accept[j] == '\0')
return (count);
}
return (count);
}

