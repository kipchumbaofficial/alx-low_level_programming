#include "function_pointers.h"
/**
 * print_name - Prints name
 * @name: Name to be printed
 * @f: Function pointer to print name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
