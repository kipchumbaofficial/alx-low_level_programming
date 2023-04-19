#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - Prints name
 * @name: name to be printed
 * @f: pointer to funtion
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
	f(name);
}
