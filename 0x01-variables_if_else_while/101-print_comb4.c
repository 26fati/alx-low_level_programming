#include<stdio.h>
/**
 * main - entry point
 *
 * Description: a program that prints,
 * all possible different combinations of three digits.
 *
 * Return:  return 0 (success)
 */
int main(void)
{
	int i, j, a;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (a = j + 1; a <= 9; a++)
			{
				putchar(48 + i);
				putchar(48 + j);
				putchar(48 + a);
				if (i < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
