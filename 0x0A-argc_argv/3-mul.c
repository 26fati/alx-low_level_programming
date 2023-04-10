#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two numbers.
 *
 * @argc: the number of the commands.
 * @argv: the commands line arguments.
 *
 * Return: return 0 (success).
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);

		printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
