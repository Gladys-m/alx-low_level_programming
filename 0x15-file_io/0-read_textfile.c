#include "main.h"

/**
 * read_textfile - reads a text file and prints to POSIX stdout
 * @filename: file to read
 * @letters: size of letters
 *
 * Return: actual number of letters or NULL if failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, fdread, fdwrite;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	if (filename == NULL)
		return (0);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	fdread = read(fd, buffer, letters);
	if (fdread == -1)
		return (0);

	fdwrite = write(STDOUT_FILENO, buffer, fdread);
	if (fdwrite == -1)
		return (0);

	close(fd);
	free(buffer);
	return (fdwrite);
}
