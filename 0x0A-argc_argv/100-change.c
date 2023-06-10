#include <stdio.h>
#include <stdlib.h>
/**
 * minChange - Checks minimum change to return
 * from passed coins
 * @cents: Number passed
 */
void minChange(int cents)
{
	int coins;

	if (cents < 0)
	{
		printf("%d\n", 0);
	}
	else
	{
		coins = 0;
		coins += cents / 25;
		cents %= 25;
		coins += cents / 10;
		cents %= 10;
		coins += cents / 5;
		cents %= 5;
		coins += cents / 2;
		cents %= 2;
		coins += cents;
		printf("%d\n", coins);
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

	if (argc != 2)
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
