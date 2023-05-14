#include "main.h"
/**
 * _abs - Computes absolute value of an integer
 *
 * Return: Absolute value
 */
int _abs(int a)
{
	int absValue, b;

	absValue = 0;
	b = -1;
	if (a >= 0)
	{
		absValue += a;
	}
	else
	{
		absValue += (b * a);
	}
	return (absValue);
}
