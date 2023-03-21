#include"main.h"
/**
 * _isalpha - a function that checks for alphabetic character
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for a letter. 0 otherwise.
 */
int _isalpha(int c)
{
	int i;

	if ((i >= 65 && i <= 90) || (i >= 97 && i <= 122))
		return (1);
	return (0);
	return ('\n');
}
