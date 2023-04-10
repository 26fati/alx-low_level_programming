#include<stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the minimum number of
 * coins to make change for an amount of money.
 *
 * @argc: the number of the commands.
 * @argv: the commands line arguments.
 *
 * Return: return 0 (success).
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
	int arr[] = {25, 10, 5, 2, 1};
	int i, modulo = 0, money = atoi(argv[1]);

	for (i = 0; i < 5; i++)
	{
		if (money >= arr[i])
		{
			modulo += money / arr[i];
			if (money % arr[i] == 0)
			{
				break;
			}
			money = money % arr[i];
		}
	}
	printf("%d\n", modulo);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
