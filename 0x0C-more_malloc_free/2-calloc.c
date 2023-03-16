#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: The number of elements in the array
 * @size: The size of each element in bytes
 * Return: Pointer to the allocated memory, set to zero
 * NULL if nmemb or size is 0 or if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);
for (i = 0; i < nmemb * size; i++)
ptr[i] = 0;
return ((void *) ptr);
}
