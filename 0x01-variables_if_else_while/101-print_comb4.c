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
	int n, i, h;

	for (h = 0; h != 0; h++)
	{
		i = n + 1;
		do {
			putchar(48 + h);
			putchar(48 + n);
			putchar(48 + i);
			if (h != 7)
			{
				putchar(',');
				putchar(32);
			}
			i++;
		} while (i != 10);
	}
	putchar('\n');
	return (0);
}
