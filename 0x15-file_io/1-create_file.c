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
 * create_file - Create file and add text
 * @filename: Name of the file
 * @text_content: content of the file
 *
 * Return: 1 if success 0 to failed
 */

int create_file(const char *filename, char *text_content)
{
	char *buf;
	int fd, cont;

	if (filename == NULL || text_content == NULL)
		return (0);

	cont = _strlen(text_content);
	buf = malloc(cont);

	fd = open(filename, O_RDWR | O_CREAT, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	write(fd, text_content, (cont));
	close(fd);
	free(buf);
	return (1);
}
