#include "holberton.h"
/**
 * print_line - print character
 *
 * @n: Is the number times
 *
 * Return: no return
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar(95);
		i++;

	}
	_putchar('\n');
}
