#include "holberton.h"
/**
 * _isupper - Print if c is upper
 *
 * @c: Is te value to process
 *
 * Return: 1 if c is upper else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
