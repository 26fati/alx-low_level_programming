#include "main.h"
/**
 * _strstr - a function that locates a substring.
 *
 * @haystack: the first string.
 * @needle: the second string.
 *
 * Return: returns a pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{

	for (; *haystack != '\0'; haystack++)
	{
		char *p = haystack;
		char *l = needle;

		while (*p == *l && *p != '\0')
		{
			p++;
			l++;

		}
		if (*l == '\0')
			return (haystack);

	}
	return (0);
}
