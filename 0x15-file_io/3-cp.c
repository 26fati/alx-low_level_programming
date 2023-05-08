#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_error - checks if files can be opened.
 * @fd_from: file_from.
 * @fd_to: file_to.
 * @argv: arguments vector.
 * Return: no return.
 */
void print_error(int fd_from, int fd_to, char *argv[])
{
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd_to, fd_from, err_code;
	char buffer[1024];
	ssize_t byte_r, byte_w;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_CREAT |  O_WRONLY | O_TRUNC | O_APPEND, 0664);

	print_error(fd_from, fd_to, argv);

	byte_r = 1024;
	while (byte_r == 1024)
	{
		byte_r = read(fd_from, buffer, 1024);
		if (byte_r == -1)
			print_error(-1, 0, argv);

		byte_w = write(fd_to, buffer, byte_r);
		if (byte_w == -1)
			print_error(0, -1, argv);
	}
	err_code = close(fd_from);
	if (err_code == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	err_code = close(fd_to);
	if (err_code == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}
