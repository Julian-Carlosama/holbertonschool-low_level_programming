#include "holberton.h"

/**
 * print_chessboard - prints the chessboard
 *
 * @a: pointer to process
 *
 * Return: no return
 *
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i = 0, j = 0;

	while (i < 64)
	{
		if (i % 8 == 0 && i != 0)
		{
			j = i;

			_putchar(10);
		}
		_putchar(a[i / 8][i - j]);
		i++;
	}
	_putchar(10);
}
