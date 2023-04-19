#include "function_pointers.h"
/**
 * print_name - Prints name
 * @name: name to be printed
 * @f: pointer to funtion
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
