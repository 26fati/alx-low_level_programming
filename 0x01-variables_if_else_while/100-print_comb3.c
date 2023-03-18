#include<stdio.h>
/**
 * main - entry point
 *
 * Description: a program that prints,
 * all possible different combinations of two digits.
 *
 * Return: return 0 (success)
 */
int main(void)
{
	int n, i;

	for (n = 0; n < 9; n++)
	{
		i = n + 1;
		do {
			putchar(48 + n);
			putchar(48 + i);
			if (n < 8)
			{
				putchar(',');
				putchar(' ');
			}
			i++;
		} while (i < 10);
	}
	putchar('\n');
	return (0);
}
