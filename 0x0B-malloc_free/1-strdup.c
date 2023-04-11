#include "main.h"
#include <stdlib.h>
char *_strdup(char *str)
{
	int i = 0;
	char *arr = malloc(sizeof(str));

	if (str == 0)
		return (0);
	while (*str)
	{
		arr[i] = str[i];
		i++;
	}
	return (arr);
}
