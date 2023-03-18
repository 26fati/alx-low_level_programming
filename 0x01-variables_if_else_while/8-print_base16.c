#include<stdio.h>
/**
 * main - entry point
 *
 * Description: a program that prints,
 * all the numbers of base 16.
 *
 * Return: return 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 16; i++)
	{
		if (i < 10)
			putchar(48 + i);
		else
			putchar(87 + i);
	}
	putchar('\n');
	return (0);
}
