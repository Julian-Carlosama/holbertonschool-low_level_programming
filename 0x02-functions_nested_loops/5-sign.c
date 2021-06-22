#include "holberton.h"
/**
 * print_sign - Determied if n is greater, less or equal that zero
 *
 * @n: Is a character in ASCII
 *
 * Return: 0, 1 or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
}
