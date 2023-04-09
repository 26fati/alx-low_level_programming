#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 *
 * @s: the first sring.
 * @accept: the second string
 *
 * Return: return the number of bytes in the initial segment of
 * s which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				length++;
				break;
			}

		}
		if (accept[j] != s[i])
			break;
	}
	return (length);

}
