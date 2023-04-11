#include "main.h"
#include <stdlib.h>
char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *arr;

	if (str == NULL)
		return (NULL);
	for (; str* != '\0'; size++)
	;
	arr = malloc(size * sizeof(str) + 1);
	if (arr == 0)
		return (NULL);
	else
	{
	while (*str)
	{
		arr[i] = str[i];
		i++;
	}
	}
	return (arr);
}
