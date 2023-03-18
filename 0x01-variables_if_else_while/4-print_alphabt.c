#include<stdio.h>
/**
 * main - entry point
 *
 * Description: a program that prints the alphabet,
 * in lowercase except q and e.
 *
 * Return: return 0 (success)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e')
			continue;
		else if (i == 'q')
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
