#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argv: Argument vector
 * @argc: Argument count
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int amnt, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amnt = atoi(argv[1]);
	cents = 0;
	if (amnt > 25)
	{
		while (amnt >= 25)
			amnt -= 25, cents++;
	}
	if (amnt > 10 && amnt < 25)
		while (amnt >= 10)
			amnt -= 10, cents++;
	if (amnt > 5 && amnt < 10)
		while (amnt >= 5)
			amnt -= 5, cents++;
	if (amnt > 2 && amnt < 5)
		while (amnt >= 2)
			amnt -= 2, cents++;
	if (amnt == 1 || amnt == 2 || amnt == 5 || amnt == 10 || amnt == 25)
	{
		cents++;
	}
	printf("%d\n", cents);
	return (0);
}
