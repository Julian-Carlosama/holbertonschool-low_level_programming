#include "holberton.h"
/**
 * print_most_numbers - Show numbers expt 2 and 4
 *
 * Return: no return
 */
void print_most_numbers(void)
{
	char n;

	for (n = 48; n < 58; n++)
	{
		if (n != 50 && n != 52)
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
