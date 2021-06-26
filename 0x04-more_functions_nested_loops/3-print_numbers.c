#include "holberton.h"
/**
 * print_numbers - show the numbers
 *
 * Return: no return
 *
 *
 */
void print_numbers(void)
{
	char n;

	n = 48;

	while (n < 58)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
