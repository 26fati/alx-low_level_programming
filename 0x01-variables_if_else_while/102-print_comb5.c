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
	int i, j, a, b;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			for (a = i; a <= 9; a++)
			{
				for (b = j + 1; b <= 9; b++)
				{
					putchar(48 + i);
					putchar(48 + j);
					putchar(32);
					putchar(48 + a);
					putchar(48 + b);
					if (!(j == 8 && i == 9))
					{
						putchar(',');
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
