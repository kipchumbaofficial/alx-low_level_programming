#include "main.h"
/**
 * _strlen - Gets String length
 * @str: String to get its length
 *
 * Return: Length
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
 * append_text_to_file - Appends a file
 * @filename: File to append
 * @text_content: Text to add
 *
 * Return: 1 on succes and -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, written;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	fd = open(filename, O_APPEND | O_WRONLY);
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
