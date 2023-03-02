#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number to be added.
 * @n2: The second number to be added.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result or 0 if the result can not be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, k, l, m, sum, carry = 0;
for (i = 0; n1[i]; i++)
;
for (j = 0; n2[j]; j++)
;
if (i > size_r || j > size_r)
return (0);
r[size_r - 1] = '\0';
for (i--, j--, k = size_r - 2; k >= 0 && (i >= 0 || j >= 0); i--, j--, k--)
{
sum = carry;
if (i >= 0)
sum += n1[i] - '0';
if (j >= 0)
sum += n2[j] - '0';
carry = sum / 10;
r[k] = (sum % 10) + '0';
}
if (carry)
{
if (k < 0)
return (0);
r[k--] = carry + '0';
}
for (l = 0, m = k + 1; r[m]; l++, m++)
r[l] = r[m];
r[l] = '\0';
return (r);
}

