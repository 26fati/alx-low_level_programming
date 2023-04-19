#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - add two numnbers.
 *
 * @a: number 1.
 * @b: number 2.
 *
 * Return: return the sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract two numnbers.
 *
 * @a: number 1.
 * @b: number 2.
 *
 * Return: return the difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiple two numnbers.
 *
 * @a: number 1.
 * @b: number 2.
 *
 * Return: return the product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divise two numnbers.
 *
 * @a: number 1.
 * @b: number 2.
 *
 * Return: return the result of the division of a and b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulo two numnbers.
 *
 * @a: number 1.
 * @b: number 2.
 *
 * Return: return the remainder of the division of a and b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
