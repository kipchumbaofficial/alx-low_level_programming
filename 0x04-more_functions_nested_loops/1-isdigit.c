#include "main.h"
/**
 * _isdigit - check for digit 0 through 9
 *
 * @c: integet checked
 *
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
