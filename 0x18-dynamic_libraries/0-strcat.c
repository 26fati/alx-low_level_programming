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
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (*(src + j) != '\0' && i < 97)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (dest);
}
