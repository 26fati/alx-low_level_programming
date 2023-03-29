#include "main.h"
/**
 * _strncat -  a function that concatenates two strings.
 *
 * @dest: the string from the destination.
 * @src:the string from the source.
 * @n: thr n bytes from the source.
 *
 * Return: return pointer to the destination.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (*(src + j) != '\0' &&  i < 97 && j < n)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (dest);
}
