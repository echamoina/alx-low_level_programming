#include "main.h"
#include <stdio.h>

/**
 * rot13 - Encodes a string using rot13.
 * @s: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *s)
{
int i, j;
char *enc = s;
char *in = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *out = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; s[i]; i++)
{
for (j = 0; in[j]; j++)
{
if (s[i] == in[j])
{
s[i] = out[j];
break;
}
}
}
return (enc);
}
