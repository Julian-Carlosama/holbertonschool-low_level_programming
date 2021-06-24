#include "holberton.h"
/**
 * times_table - Print the table
 *
 * Return: No is defined
 *
 */
void times_table(void)
{
	int e, f, m;

	while (e <= 9)
	{
		_putchar(48);
		for (f = 1; f <= 9; f++)
		{
			m = (e * f);
			_putchar(44);
			_putchar(32);

			if (m <= 9)
			{
				_putchar(32);
				_putchar(m + '0');
			}
			else
			{
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}

		}
		e++;
		_putchar('\n');
	}
}
