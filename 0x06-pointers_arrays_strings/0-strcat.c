#include "main.h"
/**
 * _strcat - a function that concatenates two strings.
 *
 * @dest: the destination of the string.
 * @src: the source of the string.
 *
 * Return: return a pointer to the desination.
 */
char *_strcat(char *dest, char *src)
{
	char *pointer = dest;
	int i = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (*src)
	{
		*(dest + i) = *src;
		*src++;
		*dest++;
	}
	*(dest) = '\0';
	return (pointer);
}
