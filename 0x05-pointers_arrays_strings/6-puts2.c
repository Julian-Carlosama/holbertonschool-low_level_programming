#include "holberton.h"
/**
 * puts2 - exclude each 2 elements
 *
 * @str: String to process
 *
 * Return: No return
 */
void puts2(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
		if (c % 2 == 0)
			_putchar(str[c]);
	}
	_putchar(10);
}
