#include"main.h"
/**
 * _islower - checks for lowercase character
 *
 *@i: The character is in ASCII code
 *
 * Return: return 1 for lowecase character. 0 otherwise.
 */
int _islower(int i)
{
	if (i >= 97 && i <= 122)
	{
		return (1);
	}
	return (0);
	_putchar('\n');
}
