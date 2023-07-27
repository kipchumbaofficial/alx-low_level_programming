#include "main.h"
/**
 * _printerror - Handles errors
 * @status: Exit status
 * @filename: Name of file
 */
void _printerror(int status, char *filename)
{
	if (status == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	if (status == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}

}
/**
 * copier - Copies contet from src to dest
 * @src: Source
 * @dest: Destination
 *
 * Return: 1 on success -1 on failure
 */
void copier(char *src, char *dest)
{
	int fd_read, res_read, fd_write, res_write;
	char *buf[1024];

	fd_read = open(src, O_RDONLY);
	if (fd_read < 0)
		_printerror(98, src);
	fd_write = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_write < 0)
	{
		close(fd_read);
		_printerror(99, dest);
	}
	do {
		res_read = read(fd_read, buf, 1024);
		if (res_read < 0)
		_printerror(98, src);
		res_write = write(fd_write, buf, res_read);
		if (res_write < res_read)
			_printerror(99, dest);
	} while (res_write == 1024);
	if (close(fd_read) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_read);
		close(fd_write);
		exit(100);
	}
	if (close(fd_write) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_write);
		exit(100);
	}
}
/**
 * main - Entry point
 * @ac: Argument count
 * @av: Argument Vector
 *
 * Return: 0
 */
int main(int ac, char *av[])
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copier(av[1], av[2]);
	return (0);
}
