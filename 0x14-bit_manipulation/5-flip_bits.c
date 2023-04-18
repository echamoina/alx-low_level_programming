#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * flip_bits - number of bit you would need to flip to
 * @n: number of bits
 * @m: number of flip n tp
 * Return: The necessary number of bits to flip to get from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int jor = n ^ m, bit = 0;

	while (jor > 0) /*checks for the size*/
	{
		bit += (jor & 1); /*count the bits*/
		jor >>= 1;
	}

	return (bit);
}
