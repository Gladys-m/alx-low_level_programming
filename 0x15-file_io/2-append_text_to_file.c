#include "main.h"

/**
 * append_text_to_file - appends text at end of file
 * @filename: name of file
 * @text_content - text to be appended
 *
 * Return: 1 successor -1 on failure
 */
int append_text_to_file(const  char *filename, char *text_content)
{
	int fd, fdwrite, i;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_RDWR, 0664);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (i =0; text_content[i]; i++)
			;
		fdwrite = write(fd, text_content, i);
		if (fdwrite == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
