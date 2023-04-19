#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name_as_is - prints name as is
 * @name: name to be printed
 *
 */
void print_name_as_is(char *name)
{
	printf("My name is %s\n", name);
}
/**
 * print_name _uppercase -  Print name
 * @name: Name printed
 *
 */
void print_name_uppercase(char *name)
{
	unsigned int i;

	printf("My Name Just in upper case: ");
	i = 0;
	while (name[i])
	{
		if (name[i] >= 'a' && name[i] <= 'z')
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
 * main - checks code
 *
 * Return: 0
 */
int main(void)
{
	print_name("Bob", print_name_as_is);
	print_name("Bob Dylan", print_name_uppercase);
	printf("\n");
	return(0);
}
