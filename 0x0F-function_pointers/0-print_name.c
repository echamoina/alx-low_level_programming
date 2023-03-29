#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer to a string containing the name to be printed
 * @f: pointer to a function that takes a char pointer
 * as a parameter and returns void
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
