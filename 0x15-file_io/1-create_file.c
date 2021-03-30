#include "holberton.h"
/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: contents of file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr, i;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (fd);

	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			;
	}

	wr = write(fd, text_content, i);
	if (wr == -1)
	{
		close(fd);
		return (-1);
	}
	return (1);
}
