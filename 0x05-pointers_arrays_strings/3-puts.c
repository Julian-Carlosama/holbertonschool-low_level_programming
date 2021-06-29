#include "holberton.h"
/**
 * _puts - Run each character until show a string
 *
 * @str: Is the string to process
 *
 * Return: no return
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
