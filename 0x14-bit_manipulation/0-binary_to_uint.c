#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts a binary num to an unsigned intger.
 * @b: string of 0 and 1 chars.
 * Return: converted number otherwise, print 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n, i, j;

	n = j = i = 0;
	if (b == NULL)
		return (0);
	while (b[j] != '\0')
	{
		if (b[j] == '0' || b[j] == '1')
			j++;
		else
			return (0);
	}
	while (n < j)
	{
		i = i << 1;
		if (b[n] == '1')
			i += 1;
		n++;
	}
	return (i);
}
