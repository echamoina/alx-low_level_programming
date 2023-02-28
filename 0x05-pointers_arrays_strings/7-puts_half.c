#include "holberton.h"

/**
 * puts_half - prints the second half of a string
 * @str: pointer to a string
 * Return: void
 */
void puts_half(char *str)
{
int i, length;
length = _strlen(str);
for (i = (length + 1) / 2; i < length; i++)
_putchar(str[i]);
_putchar('\n');
}
