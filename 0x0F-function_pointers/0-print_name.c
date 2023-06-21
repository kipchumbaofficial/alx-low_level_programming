#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - Prints name
 * @name: Name to be printed
 * @f: Function pointer to print name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
