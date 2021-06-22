#include "holberton.h"
/**
 * _isalpha - This function determined if c is alphabet
 *
 * @c: Is an character in ASCII
 *
 * Return: 1 if c is alphabet else 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
