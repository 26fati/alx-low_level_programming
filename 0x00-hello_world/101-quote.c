#include<unistd.h>
/**
 * main - Entry point.
 *
 * Description: A C program that prints a string to the standard error.
 *
 * Return: return 1 if is exited successfuly.
 */
int main(void)
{	char quo[] = "and that piece of art is useful\" - Dore Korpar, 2015-10-19\n";
        write(1, quo, 59);
	return (1);
}
