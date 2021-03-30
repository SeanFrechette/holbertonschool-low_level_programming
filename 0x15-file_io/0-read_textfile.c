#include "holberton.h"
/**
 * read_textfile - reads and prints a text file
 * @filename: name of file to read
 * @letters: num of letters that should be read and print
 * Return: the number of letters that could be read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t rd, wr;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		close(fd);
		return (0);
	}

	rd = read(fd, buf, letters);
	if (rd == -1)
	{
		close(fd);
		return (0);
	}
	close(fd);
	wr = write(STDOUT_FILENO, buf, rd);
	if (wr == -1)
		return (0);
	return (wr);
}
