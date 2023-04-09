#include <stdio.h>
/**
 * main - a program that prints the number of arguments passed into it.
 *
 * @argc: the number of the arguments.
 * @argv: the command line arguments.
 *
 * Return: return 0 (success).
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
