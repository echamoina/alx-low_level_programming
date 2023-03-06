#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locate character in string
 * @s: Pointer to string to search
 * @c: Character to search for
 * Return: Pointer to first occurrence of character c in string s,
 * or NULL if not found
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
if (*s == c)
return (s);
return (NULL);
}

