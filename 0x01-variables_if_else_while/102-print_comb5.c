#include <stdio.h>
/**
 * main - entry point
 *
 * Description: a program that prints,
 * all possible combinations of two two-digit numbers.
 *
 * Return: return 0 (success)
*/
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			if (i < j)
			{
				putchar(48 + i / 10);
				putchar(48 + i % 10);
				putchar(32);
				putchar(48 + j / 10);
				putchar(48 + j % 10);
				if (!(j == 98 && i == 99))
				{
					putchar(',');
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
