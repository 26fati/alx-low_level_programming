#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte.
 *
 * @s: pointer to s.
 * @b:the constant char b.
 * @n: the first n bytes of the memory area.
 *
 * Return: return pointer.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n && i != '\0'; i++)
	{
		*(s + i) = 'b';
	}
	return (s);
}
