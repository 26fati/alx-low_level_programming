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
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}

/**
 * *argstostr - a function that concatenates all the arguments of your program.
 *
 * @ac: number of the arguments.
 * @av:the command line arguments.
 *
 * Return: return a pointer to an array.
 */
char *argstostr(int ac, char **av)
{
	int i = 0, numchar = 0, j, count = 0;
	char *arr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (; i < ac; i++, numchar++) 
	{
		numchar += _strlen(av[i]);
	}
	arr = malloc(numchar * sizeof(char) + 1);
	if (arr == 0)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, count++)
		{
			arr[count] = av[i][j];
		}
		arr[count] = '\n';
		count++;
	}
	arr[count] = '\0';
	return (arr);
}
