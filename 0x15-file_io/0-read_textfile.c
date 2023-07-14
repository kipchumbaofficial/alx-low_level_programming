#include "main.h"
/**
 * read_textfile - Reads and print out contents of a file
 * @filename: Name of the file
 * @letters: Number of letters to print
 *
 * Return: Actual number of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t red, fd, written;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * (letters + 1));
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}
	red = read(fd, buf, letters);
	if (red == -1)
	{
		return (0);
	}
	buf[red] = '\0';
	written = write(STDOUT_FILENO, buf, red);
	if (written == -1)
	{
		return (0);
	}
	free(buf);
	close(fd);
	return (red);
}
