#include "holberton.h"
/**
 * append_text_to_file - append text to the end of a file
 * @filename: name of file
 * @text_content: text to append
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, i;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
