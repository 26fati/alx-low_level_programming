#include <stdio.h>
/**
 * main - a program that prints all arguments it receives.
 *
 * @argc: the number of commands.
 * @argv: the command line arguments.
 *
 * Return: return 0 (sucess).
 */
int main(int argc, char *argv[])
{

	int i = 0;

	(void)argc;
	while (*argv[i] != '\0')
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
