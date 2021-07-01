#include "holberton.h"
/**
 * puts_half - Shows the last numbers
 *
 * @str: Is the string to process
 *
 * Return: no return
 */
void puts_half(char *str)
{
	int i = 0, j;

	while (str[i] != '\0')
		i++;

	if (i % 2 == 1)
		j = i / 2;
	else
		j = (i - 1) / 2;
	for (j++; j < i; j++)
		_putchar(str[j]);
	_putchar(10);

}
