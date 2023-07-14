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
	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		return (0);
	}
	red = read(fd, buf, letters);
	if (red == -1)
	{
		return (0);
	}
	written = write(1, buf, letters);
	if (written == -1)
	{
		return (0);
	}
	return (red);
}
