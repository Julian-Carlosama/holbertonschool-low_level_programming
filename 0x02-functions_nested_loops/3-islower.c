#include "holberton.h"
/**
 * _islower - Determites if c is lovercase return 1
 *
 * @c: Is a character in ASCII
 *
 * Return: 1
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
