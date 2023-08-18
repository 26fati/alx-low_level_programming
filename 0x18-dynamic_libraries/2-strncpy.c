#include "main.h"
/**
 * _strncpy - a function that copies n characters from src to dest.
 *
 * @src: the source of the string.
 * @dest: the destination of the string.
 * @n: the number of characters beeing copied.
 *
 * Return: return a pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	for ( ; i < n; i++)
		*(dest + i) = '\0';
	return (dest);

}
