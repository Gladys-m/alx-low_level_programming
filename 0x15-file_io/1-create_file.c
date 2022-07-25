#include "main.h"

/**
 * create_file - creates a file
 * @filename - name of file to be created
 * @text_content - string to write to file
 *
 * Returns: 1 on success
 */
int craete_file(const char *filename, char *text_content)
{
	int fd, fdwrite;
        int count = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (*text_content != '\0')
	{
		count++;
	}
	fdwrite = write(fd, text_content, count);
	if (fdwrite == -1)
		return (-1);
	close(fd);

	return (1);
}
