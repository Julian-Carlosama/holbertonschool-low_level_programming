#include "holberton.h"
/**
 * _abs - computes the absolute value of an integer.
 *
 * @i: Is a number to compute
 *
 * Return: The value absolute
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return ((-1 * i));
	}
	_putchar('\n');
}
