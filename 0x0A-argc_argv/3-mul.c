#include <stdlib.h>
#include <stdio.h>
/**
 * main - Print product of arguments
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b, res = 0;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		res = a * b;
		printf("%d\n", res);
	}
	return (0);
}
