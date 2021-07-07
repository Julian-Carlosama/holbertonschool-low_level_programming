#include "holberton.h"

/**
 * _puts_recursion - Print the string
 *
 * @s: is the pointer to process
 *
 * Return: no return.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar(10);
}
