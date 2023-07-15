#include "main.h"
/**
 * _strlen - Gets length of a string
 * @str: string
 *
 * Return: length
 */
int _strlen(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	return (1 + _strlen(str + 1));
}
/**
 * create_file - Creates a file
 * @filename: Name of the file to be created
 * @text_content: Content to be written to file
 *
 * Return: 1 on success -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd, written;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
		if (fd == -1)
		{
			return (-1);
		}
		close(fd);
		return (1);
	}
	fd = open(filename, O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	written = write(fd, text_content, _strlen(text_content));
	if (written == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
