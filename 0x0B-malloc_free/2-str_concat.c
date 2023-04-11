#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings.
 *
 * @s1: string one.
 * @s2: string two.
 *
 * Return: pointer should point to a newly allocated space in memory
 * which contains the contents of s1, followed by the contents of s2,
 * and null terminated, it returns NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0;
	int i = 0, j = 0;
	char *str;

	for (; s1[size1] != '\0'; size1++)
	;
	for (; s2[size2] != '\0'; size2++)
	;
	str = malloc((size1 + size2) * sizeof(*s1) + 1);
	if (str == 0)
	{
		return (0);
	}
	else
	{
		while (i < size1)
		{
			str[i] = s1[i];
			i++;
		}
		while (j < size2)
		{
			str[i] = s2[j];
			i++;
			j++;
		}
	}
	return (str);


}