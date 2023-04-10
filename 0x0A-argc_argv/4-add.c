#include <stdio.h>
#include<stdlib.h>
/**
 * main -  a program that adds positive numbers.
 *
 * @argc: the number of commands.
 * @argv: the comaands line arguments.
 *
 * Return: return 0 (success) otherwise 1.
 */
int main(int argc, char *argv[])
{
	int result = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);

		result = result + atoi(argv[argc]);
	}
	printf("%d\n", result);
	return (0);
}
