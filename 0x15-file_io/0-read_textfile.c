#include "holberton.h"

/**
 * read_textfile - read a file with in n letters
 * @filename: the name of the file
 * @letters: the number of letters to print
 *
 * Return: write the oration and return the number of charecters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd, _strlen;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		return (0);
	}

	_strlen = read(fd, buf, letters);
	if (write(STDOUT_FILENO, buf, _strlen) != _strlen)
	{
		return (0);
	}
	close(fd);
	free(buf);
	return (_strlen);
}
