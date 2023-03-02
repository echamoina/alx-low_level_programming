#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
strcat(dest, src);
return (dest);
}
