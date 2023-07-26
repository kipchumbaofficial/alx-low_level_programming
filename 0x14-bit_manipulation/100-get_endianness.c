#include "main.h"
#include <stdio.h>
/**
 * get_endianness - Gets endianes
 * Return:  0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int n;
	char *buf;

	n = 1;
	buf = (char *) & n;
	return ((int)buf[0]);
}
