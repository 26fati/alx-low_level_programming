#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _strlen - a function that returns the length of a string.
 *
 * @s: the string to get the length.
 *
 * Return: the length of string.
 */
int _strlen(char *s)
{
	int i = 0, size = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				size++;
		}
		else if (i == 0)
			size++;
	}
	size++;
	return (size);
}

/**
 * strtow - split a string into words
 * @str: a pointer to the string to split
 *
 * Return: NULL if memory allocation fails or if str is NULL or empty (""),
 * otherwise return a pointer to the array of words terminated by a NULL
 */
char **strtow(char *str)
{
	int i, j, k, l, n = 0, wc = 0;
	char **w;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = _strlen(str);
	if (n == 1)
		return (NULL);
	w = (char **)malloc(n * sizeof(char *));
	if (w == NULL)
		return (NULL);
	w[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			w[wc] = (char *)malloc(j * sizeof(char));
			j--;
			if (w[wc] == NULL)
			{
				for (k = 0; k < wc; k++)
					free(w[k]);
				free(w[n - 1]);
				free(w);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				w[wc][l] = str[i + l];
			w[wc][l] = '\0';
			wc++;
			i += j;
		}
		else
			i++;
	}
	return (w);
}
