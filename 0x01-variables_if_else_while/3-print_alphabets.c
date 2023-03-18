#include<stdio.h>
/**
 * main - entry point
 *
 * Description: a program that prints the alphabet
 * in lowercase, and then in uppercase.
 *
 * Return: return 0 (success)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
