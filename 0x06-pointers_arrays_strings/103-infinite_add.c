#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Adds two numbers
 * @n1: First number
 * @n2: Second number
 * @r: Buffer to store the result
 * @size_r: Size of buffer r
 * Return: Pointer to result, or 0 if result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, k, l, m, sum, carry = 0;
for (i = 0; n1[i] != '\0'; i++)
;
for (j = 0; n2[j] != '\0'; j++)
	;
if (i > size_r || j > size_r || size_r == 0)
return (0);
r[size_r - 1] = '\0';
for (k = i - 1, l = j - 1, m = size_r - 2; m >= 0; k--, l--, m--)
{
sum = carry;
if (k >= 0)
sum += n1[k] - '0';
if (l >= 0)
sum += n2[l] - '0';
if (k < 0 && l < 0 && !sum)
break;
carry = sum / 10;
r[m] = (sum % 10) + '0';
}
if (m < 0 || (m == 0 && carry != 0))
return (0);
return (r + m + 1);
}
