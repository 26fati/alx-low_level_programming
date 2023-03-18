#include<stdio.h>
/**
 * main - entry point
 *
 * Description: program that prints the alphabet
 * in lowercase using putchar function.
 *
 * Return: return 0 (success)
 */
int main(void)
{
	char i;

	for (i = 'a'; i < 'z'; i++)
		putchar(i);
	return (0);
}
