#include "holberton.h"
/**
 * _isdigit - Show if c is a number
 *
 * @c: Is  the variable to process
 *
 * Return: 1 if c es number else 0
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
