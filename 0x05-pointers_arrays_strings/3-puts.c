#include "main.h"

/**
 * _puts - Prints a string to stdout, followed by a new line.
 * @str: A pointer to a char array.
 */
void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
}
