#include"main.h"
/**
 * jack_bauer - a function that prints every minute of the day,
 * starting from 00:00 to 23:59.
 *
 * Return: no return.
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar(48 + i / 10);
			_putchar(48 + i % 10);
			_putchar(':');
			_putchar(48 + j / 10);
			_putchar(48 + j % 10);
			_putchar('\n');
		}
	}
}
