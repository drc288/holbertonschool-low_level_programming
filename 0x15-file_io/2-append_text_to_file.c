#include "holberton.h"

/**
 * _strlen - Count the maximum number of a array
 * @s: Input Array
 *
 * Return: counter
 */

int _strlen(char *s)
{
	int cont;

	cont = 0;
	while (s[cont])
	{
		cont++;
	}
	return (cont);
}

/**
 * append_text_to_file - add more text
 * @filename: name of the file
 * @text_content: the text
 *
 * Return: the file with more text
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
	{
		if (errno == ENOENT || errno == EROFS)
			return (-1);
	}

	if (filename == NULL)
		return (-1);

	if (write(fd, text_content, _strlen(text_content) == -1))
		return (-1);

	close(fd);
	return (1);
}
