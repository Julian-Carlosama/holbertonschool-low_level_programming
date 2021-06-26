#include "holberton.h"
/**
 * more_numbers - Show numbres
 *
 * Return: no return
 */
void more_numbers(void)
{
	int i, j;

	j = 0;

	while (j  < 10)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + 48);
				_putchar((i % 10) + 48);
			}
			else
			{
				_putchar(i + 48);
			}
		}
		_putchar('\n');
		j++;
	}
}
