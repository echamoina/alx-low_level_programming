#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: pointer to the array to be iterated over
 * @size: size of the array
 * @action: pointer to the function to be executed on each array element
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array != NULL && action != NULL)
{
size_t i;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
