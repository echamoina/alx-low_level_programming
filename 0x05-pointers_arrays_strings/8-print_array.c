#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 * separated by comma, followed by a space, and
 * followed by a new line.
 * @a: Pointer to an integer array.
 * @n: Number of elements of the array to be printed.
 * Return: void.
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != n - 1)
{
printf(", ");
}
}
printf("\n");
}
