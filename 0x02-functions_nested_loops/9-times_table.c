#include"main.h"
/**
 * times_table - a function that prints the 9 times table,
 * starting with 0.
 *
 * Return: no return.
 */
void times_table(void)
{
	int x, y, z, u, d;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;
			if (z > 9)
			{
				u = z % 10;
				d = (z - u) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(d + 48);
				_putchar(u + 48);
			}
			else
			{
				if (y != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(z + 48);
			}
		}
	_putchar('\n');
	}
}
