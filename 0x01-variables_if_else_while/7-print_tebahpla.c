#include<stdio.h>
/**
 * main - entry point
 *
 * Description: a program that prints,
 * the lowercase alphabet in reverse using putchar.
 *
 * Return: return 0 (success)
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
