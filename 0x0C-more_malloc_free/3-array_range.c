#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: the minimum value of the range (inclusive)
 * @max: the maximum value of the range (inclusive)
 * Return: a pointer to the newly created array, or NULL if an error occurs
 */
int *array_range(int min, int max)
{
int *arr, i;
if (min > max)
return (NULL);
arr = malloc((max - min + 1) * sizeof(int));
if (!arr)
return (NULL);
for (i = 0; min <= max; i++, min++)
arr[i] = min;
return (arr);
}
