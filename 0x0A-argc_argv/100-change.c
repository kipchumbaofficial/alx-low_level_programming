#include <stdio.h>
#include <stdlib.h>
/**
 * minChange - Checks minimum change to return
 * from passed coins
 * @cents: Number passed
 */
void minChange(int cents)
{
	if (cents < 0)
	{
		printf("%d\n", 0);
	}
	else if (cents <= 10)
	{
		printf("%d\n", 1);
	}
	else if (cents <= 25 && cents > 10)
	{
		printf("%d\n", 3);
	}
	else if (cents <= 100 && cents > 25)
	{
		printf("%d\n", 4);
	}
	else
	{
		printf("%d\n", 5);
	}
}
/**
 * main - Passes Arguments
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cents;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);
		minChange(cents);
	}
	return (0);
}
