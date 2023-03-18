#include<stdio.h>
/**
 * main - entry point
 *
 * Description: a program that prints all,
 * possible combinations of single-digit numbers.
 *
 * Return: return 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(48 + i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
