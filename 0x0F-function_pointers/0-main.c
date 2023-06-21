#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name_as_is - Prints name as is
 * @name: name to be printed
 */
void print_name_as_is(char *name)
{
	printf("Hello my name is %s\n", name);
}
/**
 * print_name_uppercase - Print name in uppercase
 * @name: Name to be printed
 */
void print_name_uppercase(char *name)
{
	unsigned int i;

	printf("Hello my name in uppercase is ");
	i = 0;
	while (name[i])
	{
		if(name[i] >= 'a' && name[i] <= 'z')
		{
			putchar(name[i] + 'A' - 'a');
		}
		else
		{
			putchar(name[i]);
		}
		i++;
	}
}
/**
 * main - Checks code
 *
 * Return: 0
 */
int main(void)
{
	print_name("Bob", print_name_as_is);
	print_name("Bob Dylan", print_name_uppercase);
	printf("\n");
	return (0);
}
