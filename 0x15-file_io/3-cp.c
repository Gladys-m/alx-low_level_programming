#include "main.h"

/**
 * main - copies context from one file to another
 * @argc: numbeer of arguments passed
 * @argv: argument pointer
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int file1, file2, x;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file1 = open(argv[1], O_RDONLY);
	if (file1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	while ((x = read(file1, buffer, 1024)) > 0)
	{
		if (write(file2, buffer, x) != x || file2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(file1) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1);
		exit(100);
	}
	if (close(file2) < 0)
	{
		dprintf(SRDERR_FILENO, "Error: Can't close fd %d\n", file2);
		exit(100);
	}
	return(0);
}
		

