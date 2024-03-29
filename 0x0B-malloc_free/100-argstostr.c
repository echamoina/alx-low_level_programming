#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: the number of arguments
 * @av: the array of arguments
 * Return: a pointer to the concatenated string
 */
char *argstostr(int ac, char **av)
{
int i, j, k = 0, len = 0;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
len++;
len++;
}
str = malloc(sizeof(char) * (len + 1));
if (str == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
str[k++] = av[i][j];
str[k++] = '\n';
}
str[k] = '\0';
return (str);
}
