#include<stdio.h>
/**
 * main - entry point
 *
 * Description: program that prints,
 * all single digit numbers of base 10.
 *
 * Return: return 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%i", i);
	putchar('\n');
	return (0);
}
