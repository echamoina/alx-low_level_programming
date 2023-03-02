#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: maximum number of bytes to use from src
 * Return: pointer to resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0, i;
{
while (dest[dest_len])
dest_len++;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[dest_len++] = src[i];
}
dest[dest_len] = '\0';
return (dest);
}

