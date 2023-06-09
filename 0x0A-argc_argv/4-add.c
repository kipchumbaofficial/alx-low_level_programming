#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Adds positive arguments
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			for (b = 0; argv[a][b] != '\0'; b++)
			{
				if (!isdigit(argv[a][b]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[a]);
		}
		printf("%d\n", sum);
	}
		return (0);
}
