#include <stdio.h>
/**
 * main - Prints number of arguments passed
 * @argc: Number of arguments
 * @argv: Array pointers to  arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
