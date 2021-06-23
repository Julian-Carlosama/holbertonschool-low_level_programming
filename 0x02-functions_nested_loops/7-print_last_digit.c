#include "holberton.h"
/**
 * print_last_digit - Show last digit
 *
 * @e: Is the variable to input
 *
 * Return: Get the last digit
 */
int print_last_digit(int e)
{
	int l;

	l = e % 10;

	if (l >= 0)
	{
		_putchar(l + 48);
		return (l);
	}
	else
	{
		_putchar(-l + 48);
		return (-l);
	}
	_putchar('\n');
}
