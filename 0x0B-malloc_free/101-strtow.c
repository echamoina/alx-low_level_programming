#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: the string to split
 * Return: a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
int i, j, k = 0, n = 0;
char **words, *word;
if (str == NULL || str[0] == '\0')
return (NULL);
for (i = 0; str[i]; i++)
if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
n++;
words = malloc(sizeof(char *) * (n + 1));
if (words == NULL)
return (NULL);
for (i = 0; str[i]; i++)
{
if (str[i] != ' ')
{
j = i;
while (str[j] != ' ' && str[j])
j++;
word = malloc(sizeof(char) * (j - i + 1));
if (word == NULL)
{
for (k = 0; k < i; k++)
free(words[k]);
free(words);
return (NULL);
}
for (k = 0; k < j - i; k++)
word[k] = str[i + k];
word[k] = '\0';
words[--n] = word;
i = j;
}
}
words[n] = NULL;
return (words);
}
