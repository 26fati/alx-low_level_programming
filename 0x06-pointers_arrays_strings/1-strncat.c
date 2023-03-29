#include "main.h"
/**
 * _strcat -  a function that concatenates two strings.
 *
 * @dest: the string from the destination.
 * @src:the string from the source.
 * @n: thr n bytes from the source.
 *
 * Return: return pointer to the destination.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *pointer = dest;
	int i = 0;

	while (*(dest + i))
	{
		i++;
	}
	while (*src)
	{
		*(dest + i) = *(src + n);
		src++;
		dest++;
	}
	return (pointer);
}
