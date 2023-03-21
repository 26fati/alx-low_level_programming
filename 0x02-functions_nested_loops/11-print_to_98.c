#include <stdio.h>
#include"main.h"
/**
 * print_to_98 - a function that prints all naturel numbers n to 98.
 *
 * @n: an intger number as an input.
 *
 * Return: no return.
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%i", n);
	}
	else if (n > 98)
	{
		while (n != 98)
		{
			printf("%i, ", n);
			n--;
		}
		printf("%i", n);

	}
	else
	{
		while (n != 98)
		{
			printf("%i, ", n);
			n++;
		}
		printf("%i", n);
	}
	printf("\n");
}
