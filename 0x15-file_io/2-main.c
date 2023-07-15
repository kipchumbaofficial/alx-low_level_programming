#include <stdio.h>
#include "main.h"
/**
 * main - Checks cde
 *
 * Return: 0
 */
int main(int ac, char **av)
{
	int res;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s Filename\n", av[0]);
	}
	res = append_text_to_file(av[1], av[2]);
	printf("-> %i)\n", res);
	return (0);
}
